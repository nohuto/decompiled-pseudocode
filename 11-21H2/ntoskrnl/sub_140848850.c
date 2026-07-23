/*
 * XREFs of sub_140848850 @ 0x140848850
 * Callers:
 *     sub_140847FF0 @ 0x140847FF0 (sub_140847FF0.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140848910 @ 0x140848910 (sub_140848910.c)
 */

__int64 sub_140848850()
{
  unsigned int v0; // edi
  __int64 v1; // rbx
  __int64 v2; // rcx
  unsigned int *v3; // rdx

  v0 = 6;
  memset(&unk_140C1B8A4, 0, 0xF4uLL);
  v1 = 0LL;
  dword_140C1B8A0 = 256;
  qword_140C1B998 = 167772171LL;
  if ( qword_140D068D0 )
  {
    v2 = *(_QWORD *)(qword_140D068D0 + 240);
    if ( v2 )
    {
      v3 = *(unsigned int **)(v2 + 2904);
      if ( v3 )
        v0 = *v3;
    }
    if ( *(_QWORD *)(qword_140D068D0 + 216) && (unsigned int)sub_140848910() )
      dword_140C5AFD0 |= 1u;
    if ( qword_140D068D0 )
      v1 = qword_140D068D0 + 48;
  }
  return CiInitialize(v0, v1, &dword_140C1B8A0, &off_140006570);
}
