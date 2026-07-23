/*
 * XREFs of sub_1409E3490 @ 0x1409E3490
 * Callers:
 *     sub_1409E2E90 @ 0x1409E2E90 (sub_1409E2E90.c)
 * Callees:
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140597590 @ 0x140597590 (sub_140597590.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1409E3490(__int64 a1)
{
  void *v2; // rbx
  __int64 Pool2; // rax
  char *v4; // rdi
  unsigned int v5; // eax
  __int64 i; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // [rsp+30h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-28h] BYREF
  char *v15; // [rsp+48h] [rbp-18h]
  int v16; // [rsp+50h] [rbp-10h]
  int v17; // [rsp+54h] [rbp-Ch]

  v13 = 10;
  v2 = 0LL;
  while ( 1 )
  {
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    Pool2 = ExAllocatePool2(64LL, 40 * v13, 1953985605LL);
    v2 = (void *)Pool2;
    if ( !Pool2 )
      break;
    if ( (unsigned int)sub_140597590(Pool2, &v13) != -1073741820 )
    {
      if ( v13 )
      {
        v4 = (char *)ExAllocatePool2(64LL, 68 * v13, 1953985605LL);
        if ( v4 )
        {
          v5 = v13;
          for ( i = 0LL; (unsigned int)i < v13; v5 = v13 )
          {
            v7 = 5 * i;
            v8 = (unsigned int)i;
            v9 = *((_DWORD *)v2 + 10 * i);
            i = (unsigned int)(i + 1);
            v10 = 68 * v8;
            *(_DWORD *)&v4[v10] = v9;
            *(_QWORD *)&v4[v10 + 4] = *((_QWORD *)v2 + v7 + 1);
            v11 = *((_QWORD *)v2 + v7 + 2);
            *(_QWORD *)&v4[v10 + 60] = 0LL;
            *(_QWORD *)&v4[v10 + 12] = v11;
            *(_QWORD *)&v4[v10 + 20] = *((_QWORD *)v2 + v7 + 3);
            v12 = *((_QWORD *)v2 + v7 + 4);
            *(_QWORD *)&v4[v10 + 44] = 0LL;
            *(_QWORD *)&v4[v10 + 36] = 0LL;
            *(_QWORD *)&v4[v10 + 52] = 0LL;
            *(_QWORD *)&v4[v10 + 28] = v12;
          }
          UserData.Reserved = 0;
          v17 = 0;
          UserData.Ptr = (ULONGLONG)&v13;
          UserData.Size = 4;
          v15 = v4;
          v16 = 68 * v5;
          if ( a1 )
          {
            sub_1402AB170((__int64)&UserData, *(_QWORD *)(a1 + 1096), *(_DWORD *)a1, 2u, 0x27Eu, 0x401804u);
          }
          else
          {
            if ( _bittest((_DWORD *)xmmword_140D06900 + 1, 0x17u) )
              sub_14035EDE4((__int64)&UserData, 2u, 0x20800000u, 0x27Eu, 0x401804u);
            if ( qword_140D05008 != -4540 && (*(_DWORD *)(qword_140D05008 + 4544) & 0x800000) != 0 )
              EtwWrite(qword_140C15FB0, &stru_1400391F8, 0LL, 2u, &UserData);
          }
          ExFreePoolWithTag(v4, 0);
        }
      }
      ExFreePoolWithTag(v2, 0);
      return;
    }
  }
}
