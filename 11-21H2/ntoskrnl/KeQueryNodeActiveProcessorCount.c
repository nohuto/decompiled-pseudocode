/*
 * XREFs of KeQueryNodeActiveProcessorCount @ 0x1403DDCA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14026428C @ 0x14026428C (sub_14026428C.c)
 *     sub_140354698 @ 0x140354698 (sub_140354698.c)
 */

__int64 __fastcall KeQueryNodeActiveProcessorCount(unsigned __int16 a1)
{
  unsigned int v1; // r10d
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  int v5; // [rsp+2Ch] [rbp-Ch]
  __int16 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  v6 = 0;
  if ( a1 >= (unsigned __int16)word_140D05000 )
    return 0LL;
  _mm_lfence();
  v5 = 0;
  v3 = qword_140D31700[a1];
  v4 = *(_DWORD *)(v3 + 16);
  while ( !(unsigned int)sub_140354698((__int64)&v3, &v7) )
    sub_14026428C(v7, 0LL, &v6);
  return v1;
}
