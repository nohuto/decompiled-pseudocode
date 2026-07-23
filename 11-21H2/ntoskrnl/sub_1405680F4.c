/*
 * XREFs of sub_1405680F4 @ 0x1405680F4
 * Callers:
 *     sub_140567630 @ 0x140567630 (sub_140567630.c)
 * Callees:
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     sub_14062C944 @ 0x14062C944 (sub_14062C944.c)
 */

char sub_1405680F4()
{
  int v0; // eax
  __int64 v1; // rdx
  ULONG v2; // ecx
  __int64 v3; // rdx
  ULONG v4; // ecx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0LL;
  v0 = sub_14062C944(2LL, *((unsigned int *)KeGetCurrentPrcb() + 9), &v6);
  if ( v0 >= 0 )
  {
    v1 = 0x2000LL;
    *(_QWORD *)&qword_140C31E18 = v6;
    *(_QWORD *)&qword_140C31E10 = v6 + HIDWORD(v6);
    if ( HIDWORD(v6) >= 0x2000uLL )
    {
      v2 = v6 + HIDWORD(v6) - 0x2000;
    }
    else
    {
      v1 = HIDWORD(v6);
      v2 = v6;
    }
    sub_1403D99B4(v2, (PVOID)v1);
    sub_1403D99B4((ULONG)&qword_140C31E18, (PVOID)8);
    LOBYTE(v0) = sub_1403D99B4((ULONG)&qword_140C31E10, (PVOID)8);
  }
  if ( byte_140C46C60 )
  {
    v0 = sub_14062C944((unsigned __int16)word_140CF7078, *((unsigned int *)KeGetCurrentPrcb() + 9), &v6);
    if ( v0 >= 0 )
    {
      v3 = 4096LL;
      *(_QWORD *)&qword_140C31E08 = v6;
      *(_QWORD *)&qword_140C31E00 = v6 + HIDWORD(v6);
      if ( HIDWORD(v6) >= 0x1000uLL )
      {
        v4 = v6 + HIDWORD(v6) - 4096;
      }
      else
      {
        v3 = HIDWORD(v6);
        v4 = v6;
      }
      sub_1403D99B4(v4, (PVOID)v3);
      sub_1403D99B4((ULONG)&qword_140C31E08, (PVOID)8);
      LOBYTE(v0) = sub_1403D99B4((ULONG)&qword_140C31E00, (PVOID)8);
    }
  }
  return v0;
}
