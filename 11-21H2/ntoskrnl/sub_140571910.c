/*
 * XREFs of sub_140571910 @ 0x140571910
 * Callers:
 *     sub_14020F360 @ 0x14020F360 (sub_14020F360.c)
 *     sub_1402B3140 @ 0x1402B3140 (sub_1402B3140.c)
 *     sub_1402B9680 @ 0x1402B9680 (sub_1402B9680.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140571910(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r11
  __int64 v3; // r9
  unsigned int *v4; // r10
  __int64 v5; // r8
  __int64 v6; // rbx
  unsigned __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 360);
  v2 = *(_QWORD *)(v1 + 32);
  if ( v2 )
  {
    v3 = 1LL;
    if ( dword_140D01954 )
    {
      v4 = (unsigned int *)&unk_140C2AEC0;
      v5 = v1 + 48;
      v6 = (unsigned int)dword_140D01954;
      do
      {
        if ( (v2 & v3) != 0 )
        {
          v7 = __readpmc(*v4);
          *(_QWORD *)(v5 + 8) += (unsigned int)(v7 - *(_DWORD *)v5);
          *(_QWORD *)v5 = v7;
        }
        v3 *= 2LL;
        ++v4;
        v5 += 24LL;
        --v6;
      }
      while ( v6 );
    }
  }
}
