/*
 * XREFs of ?DispatchNextCallback@SipcEndpoint@@QEAAJPEAX@Z @ 0x180127CF0
 * Callers:
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x180017E70 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x180127EC0 (-FailFast_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ?GetNextSectionEvent@SipcPort@@QEAAJAEAUSipcPortEvent@@@Z @ 0x18012887C (-GetNextSectionEvent@SipcPort@@QEAAJAEAUSipcPortEvent@@@Z.c)
 */

__int64 __fastcall SipcEndpoint::DispatchNextCallback(SipcEndpoint *this, void *a2)
{
  __int64 v4; // rcx
  int v6; // ecx
  unsigned int NextSectionEvent; // edi
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  void *v13; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+48h] [rbp-30h]
  __int64 v19; // [rsp+50h] [rbp-28h]
  __int64 v20; // [rsp+58h] [rbp-20h]
  unsigned int v21; // [rsp+60h] [rbp-18h]

  v4 = *((_QWORD *)this + 3);
  if ( *(_BYTE *)(v4 + 48) )
  {
    *(_BYTE *)(v4 + 48) = 0;
    if ( (*(_DWORD *)(v4 + 44))-- == 1 )
      ResetEvent(*(HANDLE *)(v4 + 8));
    v6 = 4;
    goto LABEL_8;
  }
  v17 = 0;
  NextSectionEvent = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 32LL))(v4, &v17);
  if ( NextSectionEvent == 1 )
  {
    if ( a2 == *((void **)this + 7) )
    {
      v6 = 5;
LABEL_8:
      v17 = v6;
      NextSectionEvent = 0;
LABEL_12:
      if ( !v6 )
        goto LABEL_28;
      v8 = v6 - 1;
      if ( !v8 )
        goto LABEL_28;
      v9 = v8 - 1;
      if ( !v9 )
        goto LABEL_28;
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            if ( v12 == 1 )
            {
              (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64, __int64))this + 12))(
                *((_QWORD *)this + 13),
                ((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
                v21,
                v20,
                v18,
                v19);
              goto LABEL_20;
            }
LABEL_28:
            wil::details::in1diag0::FailFast_Hr((wil::details::in1diag0 *)0x8000FFFFLL, (int)a2);
          }
          v15 = ((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64);
          v16 = 2LL;
        }
        else
        {
          v15 = ((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64);
          v16 = 1LL;
        }
      }
      else
      {
        v15 = ((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64);
        v16 = 0LL;
      }
      (*((void (__fastcall **)(_QWORD, __int64, __int64))this + 10))(*((_QWORD *)this + 13), v15, v16);
      goto LABEL_20;
    }
    NextSectionEvent = SipcPort::GetNextSectionEvent(*((SipcPort **)this + 3), (struct SipcPortEvent *)&v17);
  }
  if ( !NextSectionEvent )
  {
    v6 = v17;
    goto LABEL_12;
  }
LABEL_20:
  v13 = (void *)*((_QWORD *)this + 7);
  if ( a2 == v13 && v17 != 5 )
    SetEvent(v13);
  return NextSectionEvent;
}
