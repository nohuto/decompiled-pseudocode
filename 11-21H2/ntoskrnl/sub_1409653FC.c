/*
 * XREFs of sub_1409653FC @ 0x1409653FC
 * Callers:
 *     sub_140963B40 @ 0x140963B40 (sub_140963B40.c)
 * Callees:
 *     sub_1402D8494 @ 0x1402D8494 (sub_1402D8494.c)
 *     sub_1402D84BC @ 0x1402D84BC (sub_1402D84BC.c)
 *     ZwEnumerateValueKey @ 0x14041B9C0 (ZwEnumerateValueKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

NTSTATUS __fastcall sub_1409653FC(HANDLE KeyHandle, ULONG Index, unsigned __int64 a3, void *a4, __int64 *a5)
{
  NTSTATUS result; // eax
  unsigned int *v10; // rax
  unsigned int *v11; // rbx
  NTSTATUS v12; // edi
  size_t v13; // r8
  __int64 v14; // rcx
  ULONG ResultLength[10]; // [rsp+30h] [rbp-28h] BYREF

  ResultLength[0] = 0;
  result = ZwEnumerateValueKey(KeyHandle, Index, KeyValueBasicInformation, 0LL, 0, ResultLength);
  if ( result == -1073741789 || result == -2147483643 )
  {
    v10 = (unsigned int *)sub_1402D84BC(ResultLength[0]);
    v11 = v10;
    if ( v10 )
    {
      v12 = ZwEnumerateValueKey(KeyHandle, Index, KeyValueBasicInformation, v10, ResultLength[0], ResultLength);
      if ( !v12 )
      {
        v13 = v11[2];
        v14 = v13 + 2;
        if ( v13 + 2 <= a3 )
        {
          memmove(a4, v11 + 3, v13);
          *((_WORD *)a4 + ((unsigned __int64)v11[2] >> 1)) = 0;
          v14 = v11[2] + 2LL;
        }
        else
        {
          v12 = -1073741789;
        }
        *a5 = v14;
      }
      sub_1402D8494(v11);
      return v12;
    }
    else
    {
      return -1073741801;
    }
  }
  return result;
}
