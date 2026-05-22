/*
 * XREFs of ?AddSectionListEntry@SipcPort@@IEAAXPEAUSectionListEntry@1@@Z @ 0x18012727C
 * Callers:
 *     ?CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z @ 0x180127670 (-CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z.c)
 *     ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1801283D0 (-GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     ?IncreaseSectionEventCount@SipcPort@@AEAAXI@Z @ 0x1801289D0 (-IncreaseSectionEventCount@SipcPort@@AEAAXI@Z.c)
 */

void __fastcall SipcPort::AddSectionListEntry(SipcPort *this, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax

  v2 = a2 + 8;
  v4 = -a2;
  v5 = (_QWORD *)((char *)this + 16);
  v6 = (_QWORD *)(v2 & -(__int64)(v4 != 0));
  v7 = *((_QWORD *)this + 2);
  if ( *(SipcPort **)(v7 + 8) != (SipcPort *)((char *)this + 16) )
    __fastfail(3u);
  *v6 = v7;
  v6[1] = v5;
  *(_QWORD *)(v7 + 8) = v6;
  ++*((_QWORD *)this + 4);
  *v5 = v6;
  v8 = *((_DWORD *)this + 10);
  if ( v8 )
  {
    v9 = v8 - 1;
    *((_DWORD *)this + 10) = v9;
    if ( !v9 )
    {
      while ( v6 != v5 )
      {
        v10 = (__int64)v6 + 51;
        if ( !v6 )
          v10 = 59LL;
        if ( *(_BYTE *)v10 )
        {
          v11 = (__int64)(v6 + 6);
          if ( !v6 )
            v11 = 56LL;
          if ( !*(_BYTE *)v11 )
          {
            *(_BYTE *)v11 = 1;
            SipcPort::IncreaseSectionEventCount(this, v4);
          }
        }
        v6 = (_QWORD *)*v6;
      }
    }
  }
}
