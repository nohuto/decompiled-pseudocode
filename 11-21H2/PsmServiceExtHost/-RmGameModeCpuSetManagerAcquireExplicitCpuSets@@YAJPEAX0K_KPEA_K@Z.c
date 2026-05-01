/*
 * XREFs of ?RmGameModeCpuSetManagerAcquireExplicitCpuSets@@YAJPEAX0K_KPEA_K@Z @ 0x18006D0B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     ?RmSrvCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEA_KPEAU_WNF_STATE_NAME@@@Z @ 0x18008513C (-RmSrvCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_IN.c)
 */

__int64 __fastcall RmGameModeCpuSetManagerAcquireExplicitCpuSets(
        void *a1,
        struct _RM_CPU_SET_CLIENT_CONTEXT *a2,
        int a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  struct _WNF_STATE_NAME *v8; // r9
  int v10; // [rsp+20h] [rbp-128h] BYREF
  __int64 v11; // [rsp+28h] [rbp-120h]
  int v12; // [rsp+128h] [rbp-20h]

  memset_0(&v10, 0, 0x110uLL);
  v12 |= 1u;
  v10 = a3;
  v11 = a4;
  return RmSrvCpuSetManagerAcquireCpuSets(a2, (struct _RM_CPU_SET_REQUEST_INFORMATION *)&v10, a5, v8);
}
