/*
 * XREFs of sub_1403FABD0 @ 0x1403FABD0
 * Callers:
 *     sub_1403EBAC8 @ 0x1403EBAC8 (sub_1403EBAC8.c)
 * Callees:
 *     sub_1402581D0 @ 0x1402581D0 (sub_1402581D0.c)
 *     MmIsAddressValid @ 0x14038DE50 (MmIsAddressValid.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     sub_14063B170 @ 0x14063B170 (sub_14063B170.c)
 */

void __fastcall sub_1403FABD0(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // eax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdi
  ULONG *v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  int v10; // edx
  int v11; // r9d
  int v12; // ebx
  __int64 v13; // rcx
  ULONG MaxDataSize[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( a4 == 7 && a3 == -1073741694 )
  {
    v4 = sub_1402581D0();
    v5 = (unsigned __int64)sub_140AB71C0;
    if ( !v4 )
      v5 = (unsigned __int64)sub_140434000;
    v6 = (v5 ^ *(_QWORD *)&qword_140C0E958) & 0xFFFFFFFFFFFFF000uLL;
    sub_1403D99B4((v5 ^ qword_140C0E958) & 0xFFFFF000, (PVOID)0x1000);
    _mm_lfence();
    if ( MmIsAddressValid((PVOID)v6) )
    {
      v7 = MaxDataSize;
      v8 = 4LL;
      v9 = qword_140D05410 + ((v6 >> 9) & 0x7FFFFFFFF8LL);
      do
      {
        *(_QWORD *)v7 = v9;
        v7 += 2;
        v9 = qword_140D05410 + ((v9 >> 9) & 0x7FFFFFFFF8LL);
        --v8;
      }
      while ( v8 );
      v10 = 3;
      do
      {
        v11 = v10;
        if ( (_DWORD)v8 )
        {
          *(_QWORD *)&MaxDataSize[2 * v10] = 0LL;
        }
        else
        {
          if ( !v10 )
            break;
          LODWORD(v8) = **(char **)&MaxDataSize[2 * v10] < 0;
        }
        --v10;
      }
      while ( v11 );
      v12 = 4;
      do
      {
        v13 = *(_QWORD *)&MaxDataSize[2 * (v12 - 1)];
        if ( !v13 )
          break;
        sub_1403D99B4(v13, (PVOID)8);
        --v12;
      }
      while ( v12 );
    }
    if ( (unsigned int)sub_14063B170(v6, &dword_140C0E964) )
      sub_1403D99B4((ULONG)&dword_140C0E964, (PVOID)4);
  }
}
