/*
 * XREFs of ?IsAppActive@UwpAppStateManager@@UEAA_NPEBG@Z @ 0x180623320
 * Callers:
 *     <none>
 * Callees:
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x1802D2990 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 */

bool __fastcall UwpAppStateManager::IsAppActive(RTL_SRWLOCK *this, char *a2)
{
  RTL_SRWLOCK *v2; // rsi
  char *Ptr; // rbp
  char *v6; // rdi
  char *v7; // rbx
  int v8; // eax
  int v9; // eax
  bool v10; // bl

  v2 = this + 6;
  AcquireSRWLockShared(this + 6);
  Ptr = (char *)this[7].Ptr;
  v6 = Ptr;
  v7 = (char *)*((_QWORD *)Ptr + 1);
  while ( !v7[25] )
  {
    LOBYTE(v8) = std::wstring::compare(v7 + 32, a2);
    if ( v8 >= 0 )
    {
      v6 = v7;
      v7 = *(char **)v7;
    }
    else
    {
      v7 = (char *)*((_QWORD *)v7 + 2);
    }
  }
  v10 = 0;
  if ( !v6[25] )
  {
    LOBYTE(v9) = std::wstring::compare(v6 + 32, a2);
    if ( v9 <= 0 && v6 != Ptr )
      v10 = 1;
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v10;
}
