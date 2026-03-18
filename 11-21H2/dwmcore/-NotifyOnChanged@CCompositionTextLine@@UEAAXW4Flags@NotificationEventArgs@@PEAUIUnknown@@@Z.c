/*
 * XREFs of ?NotifyOnChanged@CCompositionTextLine@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180210390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionTextLine::NotifyOnChanged(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v6; // xmm1_4
  unsigned int v7; // xmm0_4
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int128 v11; // [rsp+20h] [rbp-18h]

  if ( *(_QWORD *)(a1 + 80) )
  {
    *(float *)&v11 = *(float *)(a1 + 64) + *(float *)(a1 + 72);
    *(float *)&v6 = *(float *)&v11 + *(float *)(a1 + 92);
    *((float *)&v11 + 1) = (float)(*(float *)(a1 + 68) + *(float *)(a1 + 76)) + *(float *)(a1 + 88);
    *(float *)&v7 = *((float *)&v11 + 1) + *(float *)(a1 + 96);
    v8 = *(__int64 **)(a1 + 104);
    *((_QWORD *)&v11 + 1) = __PAIR64__(v7, v6);
    v9 = *v8;
    *((_OWORD *)v8 + 6) = v11;
    (*(void (__fastcall **)(__int64 *, _QWORD, __int64 *))(v9 + 72))(v8, 0LL, v8);
  }
  return CResource::NotifyOnChanged(a1, a2, a3);
}
