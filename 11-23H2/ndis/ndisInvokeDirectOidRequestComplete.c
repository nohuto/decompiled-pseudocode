/*
 * XREFs of ndisInvokeDirectOidRequestComplete @ 0x1C00B5C64
 * Callers:
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0009560 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qDqd @ 0x1C00092E0 (WPP_RECORDER_SF_qDqd.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisInvokeDirectOidRequestComplete(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 24);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      a3,
      0xCu,
      (struct _GUID *)&WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
      a1,
      *(_DWORD *)(a2 + 32),
      a2,
      a3);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v3 + 776))(*(_QWORD *)(a1 + 32), a2, a3);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_qq(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             4u,
             0xBu,
             0xDu,
             (struct _GUID *)&WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
             a1,
             a2);
  return result;
}
