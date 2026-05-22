/*
 * XREFs of ?DispatchNextCallback@SipcEndpoint@@QEAAJPEAX@Z @ 0x1800FE034
 * Callers:
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x180042E40 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800FE1B8 (-FailFast_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ?GetNextSectionEvent@SipcPort@@QEAAJAEAUSipcPortEvent@@@Z @ 0x1800FEB88 (-GetNextSectionEvent@SipcPort@@QEAAJAEAUSipcPortEvent@@@Z.c)
 */

__int64 __fastcall SipcEndpoint::DispatchNextCallback(SipcEndpoint *this, void *a2)
{
  __int64 v4; // rcx
  int v6; // ecx
  unsigned int NextSectionEvent; // edi
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  char *v11; // rdx
  __int64 v12; // r8
  void *v13; // rcx
  int v15; // [rsp+40h] [rbp-38h] BYREF
  __int64 v16; // [rsp+48h] [rbp-30h]
  __int64 v17; // [rsp+50h] [rbp-28h]
  __int64 v18; // [rsp+58h] [rbp-20h]
  unsigned int v19; // [rsp+60h] [rbp-18h]

  v4 = *((_QWORD *)this + 3);
  if ( *(_BYTE *)(v4 + 48) )
  {
    *(_BYTE *)(v4 + 48) = 0;
    if ( (*(_DWORD *)(v4 + 44))-- == 1 )
      ResetEvent(*(HANDLE *)(v4 + 8));
    v6 = 4;
    goto LABEL_8;
  }
  v15 = 0;
  NextSectionEvent = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 32LL))(v4, &v15);
  if ( NextSectionEvent == 1 )
  {
    if ( a2 == *((void **)this + 7) )
    {
      v6 = 5;
LABEL_8:
      v15 = v6;
      NextSectionEvent = 0;
      goto LABEL_12;
    }
    NextSectionEvent = SipcPort::GetNextSectionEvent(*((SipcPort **)this + 3), (struct SipcPortEvent *)&v15);
  }
  if ( NextSectionEvent )
    goto LABEL_22;
  v6 = v15;
LABEL_12:
  v8 = v6 - 3;
  if ( !v8 )
  {
    (*((void (__fastcall **)(_QWORD, char *, _QWORD))this + 10))(*((_QWORD *)this + 13), (char *)this + 16, 0LL);
    goto LABEL_22;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v11 = (char *)this + 16;
    v12 = 1LL;
    goto LABEL_20;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v11 = (char *)this + 16;
    v12 = 2LL;
LABEL_20:
    (*((void (__fastcall **)(_QWORD, char *, __int64))this + 10))(*((_QWORD *)this + 13), v11, v12);
    goto LABEL_22;
  }
  if ( v10 != 1 )
    wil::details::in1diag0::FailFast_Hr((wil::details::in1diag0 *)0x8000FFFFLL, (int)a2);
  (*((void (__fastcall **)(_QWORD, char *, _QWORD, __int64, __int64, __int64))this + 12))(
    *((_QWORD *)this + 13),
    (char *)this + 16,
    v19,
    v18,
    v16,
    v17);
LABEL_22:
  v13 = (void *)*((_QWORD *)this + 7);
  if ( a2 == v13 && v15 != 5 )
    SetEvent(v13);
  return NextSectionEvent;
}
