/*
 * XREFs of ?GetNextEndpointIndex@DWMCursorBroker@@AEAAJPEAI@Z @ 0x1801FA6E8
 * Callers:
 *     ?AddEndpoint@DWMCursorBroker@@UEAAJUtagMsgRoutingInfo@@I_N@Z @ 0x1801F9D20 (-AddEndpoint@DWMCursorBroker@@UEAAJUtagMsgRoutingInfo@@I_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::GetNextEndpointIndex(DWMCursorBroker *this, unsigned int *a2)
{
  _QWORD *v3; // rbx
  unsigned int v5; // esi
  unsigned int v6; // edi
  _BYTE v8[40]; // [rsp+20h] [rbp-48h] BYREF

  v3 = (_QWORD *)((char *)this + 216);
  v5 = -2147467259;
  v6 = 0;
  while ( 1 )
  {
    if ( *v3
      && (*(int (__fastcall **)(_QWORD, _QWORD, _BYTE *))(**((_QWORD **)this + 22) + 136LL))(
           *((_QWORD *)this + 22),
           *v3,
           v8) < 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 22) + 168LL))(*((_QWORD *)this + 22), *v3);
      *v3 = 0LL;
    }
    if ( !*v3 )
      break;
    ++v6;
    v3 += 3;
    if ( v6 >= 0xA )
      return v5;
  }
  *a2 = v6;
  return 0;
}
