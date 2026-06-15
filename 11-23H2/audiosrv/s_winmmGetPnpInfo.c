/*
 * XREFs of s_winmmGetPnpInfo @ 0x18003EDD0
 * Callers:
 *     <none>
 * Callees:
 *     MIDL_user_allocate @ 0x18003EE80 (MIDL_user_allocate.c)
 *     memcpy_0 @ 0x18006A819 (memcpy_0.c)
 */

__int64 __fastcall s_winmmGetPnpInfo(_DWORD *a1, _QWORD *a2)
{
  void *v4; // rax
  int v5; // ebx
  void *v6; // rdi
  unsigned int v7; // esi

  RtlAcquireResourceShared(&PnpInfoResource, 1u);
  v4 = MIDL_user_allocate(*(unsigned int *)g_pPnpInfoActual);
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    memcpy_0(v4, g_pPnpInfoActual, *(unsigned int *)g_pPnpInfoActual);
    v7 = 0;
    v5 = *(_DWORD *)g_pPnpInfoActual;
  }
  else
  {
    v7 = 14;
    v6 = 0LL;
  }
  *a1 = v5;
  *a2 = v6;
  RtlReleaseResource(&PnpInfoResource);
  return v7;
}
