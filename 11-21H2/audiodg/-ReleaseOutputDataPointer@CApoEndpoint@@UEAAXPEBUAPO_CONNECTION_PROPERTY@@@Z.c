/*
 * XREFs of ?ReleaseOutputDataPointer@CApoEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x14004FEA0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 */

void __fastcall CApoEndpoint::ReleaseOutputDataPointer(CApoEndpoint *this, const struct APO_CONNECTION_PROPERTY *a2)
{
  UINT32 v2; // eax

  v2 = *((_DWORD *)this + 26);
  if ( v2 == 1094930482 || v2 == 1094930505 )
  {
    a2->u32Signature = v2;
    a2[1].pBuffer = *((_QWORD *)this + 11);
  }
  if ( a2->u32BufferFlags == BUFFER_SILENT )
    memset_0((void *)a2->pBuffer, 0, a2->u32ValidFrameCount * *(unsigned __int16 *)(*((_QWORD *)this + 2) + 12LL));
  (*(void (__fastcall **)(_QWORD, _QWORD, const struct APO_CONNECTION_PROPERTY *))(**((_QWORD **)this + 6) + 24LL))(
    *((_QWORD *)this + 6),
    *((unsigned int *)this + 14),
    a2);
}
