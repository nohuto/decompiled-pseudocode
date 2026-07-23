/*
 * XREFs of sub_140AF2B74 @ 0x140AF2B74
 * Callers:
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     sub_140AD2200 @ 0x140AD2200 (sub_140AD2200.c)
 */

__int64 sub_140AF2B74()
{
  unsigned __int8 CurrentIrql; // al
  unsigned __int64 v1; // rbx
  char v2; // si
  unsigned int v3; // ecx
  unsigned __int8 v5; // [rsp+50h] [rbp+8h]

  CurrentIrql = KeGetCurrentIrql();
  v5 = CurrentIrql;
  __writecr8(0xFuLL);
  v1 = __readcr0();
  __writecr0(v1 & 0xFFFFFFFFFFFEFFFFuLL);
  v2 = *((_BYTE *)sub_140AD2200 + 2);
  *((_BYTE *)sub_140AD2200 + 2) = -61;
  v3 = sub_140AD2200();
  if ( *((_BYTE *)sub_140AD2200 + 2) != v2 )
    *((_BYTE *)sub_140AD2200 + 2) = v2;
  __writecr0(v1);
  __writecr8(v5);
  return v3;
}
