/*
 * XREFs of sub_14051C3E0 @ 0x14051C3E0
 * Callers:
 *     sub_14051C010 @ 0x14051C010 (sub_14051C010.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     MmGetPageBadStatus @ 0x14058F140 (MmGetPageBadStatus.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140A08CB0 (WheaAttemptPhysicalPageOffline.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14051C3E0(_DWORD **a1)
{
  _DWORD *v1; // rbx
  __int64 i; // rsi
  unsigned __int64 v4; // rax
  unsigned int v5; // r15d
  __int64 v6; // r14
  char v7; // bp
  __int64 v8; // r8
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v1 = *a1;
  for ( i = 0LL; (unsigned int)i < v1[21]; i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)&v1[6 * i + 24];
    if ( v4 > 0x32 )
    {
      *(_QWORD *)&v1[6 * i + 24] = 50LL;
      v4 = 50LL;
    }
    *(_QWORD *)&v1[6 * i + 26] = 0LL;
    v5 = 0;
    v6 = *(_QWORD *)&v1[6 * i + 22];
    if ( v4 )
    {
      v7 = 0;
      do
      {
        v9 = v6 << 12;
        if ( (unsigned int)MmGetPageBadStatus(&v9)
          || (LOBYTE(v8) = 1, !(unsigned int)WheaAttemptPhysicalPageOffline(v6, 0LL, v8, 0LL)) )
        {
          *(_QWORD *)&v1[6 * i + 26] |= 1LL << v7;
        }
        ++v5;
        ++v6;
        v7 = v5;
      }
      while ( (unsigned __int64)v5 < *(_QWORD *)&v1[6 * i + 24] );
    }
  }
  if ( byte_140C4C450 && qword_140C4C518 )
    sub_14042A5E0(a1, 0LL);
  ExFreePoolWithTag(v1, 0x576C6148u);
}
