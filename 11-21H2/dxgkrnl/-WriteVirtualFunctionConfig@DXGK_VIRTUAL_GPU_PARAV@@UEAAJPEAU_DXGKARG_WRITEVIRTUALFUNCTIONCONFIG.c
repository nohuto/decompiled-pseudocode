/*
 * XREFs of ?WriteVirtualFunctionConfig@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_WRITEVIRTUALFUNCTIONCONFIG@@@Z @ 0x1C035F5A0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C002CD00 (memmove.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::WriteVirtualFunctionConfig(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_WRITEVIRTUALFUNCTIONCONFIG *a2)
{
  __int64 Offset; // r9
  size_t Length; // r8

  Offset = a2->Offset;
  if ( (unsigned int)Offset >= 0xD0 )
  {
    Length = a2->Length;
    if ( (unsigned int)(Length + Offset) <= 0xD4 )
      memmove((void *)(Offset + 184 + *((_QWORD *)this + 13)), a2->Data, Length);
  }
  return 0LL;
}
