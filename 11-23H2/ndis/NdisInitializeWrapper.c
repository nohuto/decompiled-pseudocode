/*
 * XREFs of NdisInitializeWrapper @ 0x1C00C6CF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 */

void __stdcall NdisInitializeWrapper(
        PNDIS_HANDLE NdisWrapperHandle,
        PVOID SystemSpecific1,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  _QWORD *Pool2; // rax
  size_t v8; // r8

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_bacc0da9805531f1e85588a73c3812ec_Traceguids);
  *NdisWrapperHandle = 0LL;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, *(unsigned __int16 *)SystemSpecific2 + 26LL, 1752646734);
  if ( Pool2 )
  {
    *NdisWrapperHandle = Pool2;
    v8 = *(unsigned __int16 *)SystemSpecific2;
    *Pool2 = SystemSpecific1;
    Pool2[2] = Pool2 + 3;
    *((_WORD *)Pool2 + 4) = v8;
    *((_WORD *)Pool2 + 5) = v8 + 2;
    memmove(Pool2 + 3, *((const void **)SystemSpecific2 + 1), v8);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xBu,
      (struct _GUID *)&WPP_bacc0da9805531f1e85588a73c3812ec_Traceguids);
}
