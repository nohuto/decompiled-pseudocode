/*
 * XREFs of ?GetInfo@CCompositionSwapchainBuffer@@UEBAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C0082FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateHandle@DxgkCompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C006C45C (-CreateHandle@DxgkCompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 */

__int64 __fastcall CCompositionSwapchainBuffer::GetInfo(DxgkCompositionObject **this, void **a2, __int64 a3)
{
  NTSTATUS Handle; // r8d
  __int128 v6; // xmm1

  Handle = DxgkCompositionObject::CreateHandle(this[89], 0x10000000u, a3, 0, a2 + 145);
  if ( Handle >= 0 )
  {
    *(_DWORD *)a2 = 3;
    a2[1] = this[2];
    *((_OWORD *)a2 + 1) = *((_OWORD *)this + 3);
    *((_OWORD *)a2 + 2) = *((_OWORD *)this + 4);
    *((_OWORD *)a2 + 3) = *((_OWORD *)this + 5);
    *((_OWORD *)a2 + 4) = *((_OWORD *)this + 6);
    *((_OWORD *)a2 + 5) = *((_OWORD *)this + 7);
    *((_OWORD *)a2 + 6) = *((_OWORD *)this + 8);
    *((_OWORD *)a2 + 7) = *((_OWORD *)this + 9);
    *((_OWORD *)a2 + 8) = *((_OWORD *)this + 10);
    v6 = *((_OWORD *)this + 11);
    *((_DWORD *)a2 + 40) = 0;
    *((_OWORD *)a2 + 9) = v6;
    *((_DWORD *)a2 + 41) = *((_DWORD *)this + 68);
    a2[146] = this[90];
  }
  return (unsigned int)Handle;
}
