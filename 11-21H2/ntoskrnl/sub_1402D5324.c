/*
 * XREFs of sub_1402D5324 @ 0x1402D5324
 * Callers:
 *     sub_1402D4530 @ 0x1402D4530 (sub_1402D4530.c)
 *     sub_1403C6970 @ 0x1403C6970 (sub_1403C6970.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_1402F0D90 @ 0x1402F0D90 (sub_1402F0D90.c)
 */

char __fastcall sub_1402D5324(_QWORD *Object)
{
  __int64 v2; // rdi
  int v3; // ecx

  if ( *((_DWORD *)Object + 96) < *((_DWORD *)Object + 95) )
  {
    v2 = Object[2];
    if ( !*(_DWORD *)(v2 + 28) )
    {
      if ( !*((_DWORD *)Object + 101) )
        return 1;
      v3 = *((_DWORD *)Object + 102);
      *((_DWORD *)Object + 102) = v3 | 0x200;
      if ( *(_DWORD *)(*(_QWORD *)(v2 + 8) + 4LL) )
        return 1;
      if ( (v3 & 0x400) == 0 )
      {
        *((_DWORD *)Object + 102) = v3 | 0x600;
        ObfReferenceObjectWithTag(Object, 0x746C6644u);
        sub_1402F0D90(*(_QWORD *)(v2 + 8), &Queue, Object + 77);
      }
    }
  }
  return 0;
}
