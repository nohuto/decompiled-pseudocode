/*
 * XREFs of ?AddSectionListEntry@SipcPort@@IEAAXPEAUSectionListEntry@1@@Z @ 0x1800FD61C
 * Callers:
 *     ?CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z @ 0x1800FD9B0 (-CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z.c)
 *     ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1800FE6C0 (-GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SipcPort::AddSectionListEntry(SipcPort *this, struct SipcPort::SectionListEntry *a2)
{
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rax

  v3 = (_QWORD *)((char *)this + 16);
  v4 = (_QWORD *)(((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL));
  v5 = *((_QWORD *)this + 2);
  if ( *(SipcPort **)(v5 + 8) != (SipcPort *)((char *)this + 16) )
    __fastfail(3u);
  *v4 = v5;
  *(_QWORD *)((((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL)) + 8) = v3;
  *(_QWORD *)(v5 + 8) = v4;
  ++*((_QWORD *)this + 4);
  *v3 = v4;
  v6 = *((_DWORD *)this + 10);
  if ( v6 )
  {
    v7 = v6 - 1;
    *((_DWORD *)this + 10) = v7;
    if ( !v7 )
    {
      while ( v4 != v3 )
      {
        v8 = (__int64)v4 + 51;
        if ( !v4 )
          v8 = 59LL;
        if ( *(_BYTE *)v8 )
        {
          v9 = (__int64)(v4 + 6);
          if ( !v4 )
            v9 = 56LL;
          if ( !*(_BYTE *)v9 )
          {
            *(_BYTE *)v9 = 1;
            if ( ++*((_DWORD *)this + 11) == 1 )
              SetEvent(*((HANDLE *)this + 1));
          }
        }
        v4 = (_QWORD *)*v4;
      }
    }
  }
}
