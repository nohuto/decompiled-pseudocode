/*
 * XREFs of sub_1407F0C38 @ 0x1407F0C38
 * Callers:
 *     sub_1407F0070 @ 0x1407F0070 (sub_1407F0070.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     RtlInitString @ 0x14036B950 (RtlInitString.c)
 *     sub_1407F0E34 @ 0x1407F0E34 (sub_1407F0E34.c)
 *     sub_1407F0ED0 @ 0x1407F0ED0 (sub_1407F0ED0.c)
 *     sub_1407F0FC0 @ 0x1407F0FC0 (sub_1407F0FC0.c)
 *     sub_1407F10C4 @ 0x1407F10C4 (sub_1407F10C4.c)
 *     sub_1407F1F60 @ 0x1407F1F60 (sub_1407F1F60.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407F0C38(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  char v4; // al
  unsigned __int64 v5; // rbx
  char v6; // r14
  unsigned int v7; // ecx
  __int64 Pool2; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  UNICODE_STRING *v11; // rbp
  signed int v12; // esi
  int v13; // eax
  __int64 v15; // rax
  UNICODE_STRING v16; // xmm0
  const WCHAR *v17; // rdx
  unsigned __int64 v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rsi
  const WCHAR *i; // rbp
  __int64 v22; // rax
  UNICODE_STRING v23; // [rsp+20h] [rbp-38h] BYREF
  STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 96);
  DestinationString = 0LL;
  v23 = 0LL;
  v4 = sub_1407F0E34(v2);
  v5 = 0LL;
  v6 = v4;
  if ( !*(_QWORD *)(v2 + 24) )
    goto LABEL_3;
  v5 = (v2 + 39) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( !v4 )
    goto LABEL_3;
  v7 = -1;
  v18 = 16LL * *(unsigned int *)(v5 + 20);
  if ( v18 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v19 = v18 + 48;
  if ( (int)v18 + 48 >= (unsigned int)v18 )
    v7 = v18 + 48;
  v12 = v19 < (unsigned int)v18 ? 0xC0000095 : 0;
  if ( v19 >= (unsigned int)v18 )
  {
    if ( v7 > 0x40 )
    {
LABEL_4:
      Pool2 = ExAllocatePool2(256LL, v7, 1414616912LL);
      v9 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      v10 = *(_QWORD *)(v2 + 8);
      if ( *(_DWORD *)v2 )
      {
        v11 = (UNICODE_STRING *)(Pool2 + 8);
        if ( v10 )
        {
          RtlInitString(&DestinationString, (PCSZ)(v10 + 1448));
          v12 = sub_1407F0ED0(v11, &DestinationString);
          if ( v12 < 0 )
            goto LABEL_34;
          *(_DWORD *)v9 |= 2u;
LABEL_9:
          v13 = *(_DWORD *)v9;
          if ( v6 )
          {
            *(_DWORD *)v9 = v13 | 1;
            *(_WORD *)(v9 + 40) = *(_WORD *)(v5 + 16);
            *(_DWORD *)(v9 + 44) = *(_DWORD *)(v5 + 20);
            RtlInitUnicodeString((PUNICODE_STRING)(v9 + 24), (PCWSTR)(v5 + *(_QWORD *)(v5 + 8)));
            v20 = 0LL;
            for ( i = (const WCHAR *)(v5 + *(_QWORD *)(v5 + 24));
                  (unsigned int)v20 < *(_DWORD *)(v9 + 44);
                  i = (const WCHAR *)((char *)i + *(unsigned __int16 *)(v9 + 8 * v22) + 2) )
            {
              RtlInitUnicodeString((PUNICODE_STRING)(v9 + 16 * (v20 + 3)), i);
              v22 = 2 * (v20 + 3);
              v20 = (unsigned int)(v20 + 1);
            }
            goto LABEL_14;
          }
          if ( (v13 & 2) == 0 )
          {
            v12 = sub_1407F1F60(&v23, v11);
            if ( v12 < 0 )
              goto LABEL_34;
            v16 = v23;
            *(_DWORD *)v9 |= 2u;
            *v11 = v16;
          }
          if ( !v5
            || (*(_DWORD *)v5 & 1) == 0
            || (RtlInitUnicodeString(&v23, (PCWSTR)(v5 + *(_QWORD *)(v5 + 8))), v12 = sub_1407F0FC0(v11, &v23), v12 >= 0) )
          {
LABEL_14:
            *a2 = v9;
            return 0;
          }
LABEL_34:
          sub_1407F10C4((PVOID)v9);
          return (unsigned int)v12;
        }
        v17 = aUnidentifiedPr;
      }
      else
      {
        if ( v10 )
        {
          v15 = *(_QWORD *)(v10 + 8);
          if ( v15 )
          {
            v11 = (UNICODE_STRING *)(v9 + 8);
            *(_OWORD *)(v9 + 8) = *(_OWORD *)(v15 + 56);
            goto LABEL_9;
          }
        }
        v11 = (UNICODE_STRING *)(v9 + 8);
        v17 = aUnidentifiedDr;
      }
      RtlInitUnicodeString(v11, v17);
      goto LABEL_9;
    }
LABEL_3:
    v7 = 64;
    goto LABEL_4;
  }
  return (unsigned int)v12;
}
