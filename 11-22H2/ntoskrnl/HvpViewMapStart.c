/*
 * XREFs of HvpViewMapStart @ 0x140750734
 * Callers:
 *     HvLoadHive @ 0x14074F254 (HvLoadHive.c)
 *     HvHiveStartEmptyClone @ 0x140A1D534 (HvHiveStartEmptyClone.c)
 * Callees:
 *     CmSiGetSectionLength @ 0x1402F5F90 (CmSiGetSectionLength.c)
 *     CmSiCreateSectionForFile @ 0x1402F5FD8 (CmSiCreateSectionForFile.c)
 *     HvpViewMapCreateViewsForRegion @ 0x140689C78 (HvpViewMapCreateViewsForRegion.c)
 */

int __fastcall HvpViewMapStart(ULONG_PTR a1, void *a2, int a3, __int64 a4, int a5)
{
  char v5; // al
  int result; // eax
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v5 = a5;
  *(_DWORD *)(a1 + 32) = a5;
  *(_QWORD *)(a1 + 24) = a4;
  v11 = 0LL;
  result = CmSiCreateSectionForFile((HANDLE *)a1, (v5 & 1) != 0 ? 5 : 23, 2 * !(v5 & 1) + 2, a4, a2);
  if ( result >= 0 )
  {
    result = CmSiGetSectionLength(*(void **)a1, &v11);
    if ( result >= 0 )
    {
      v9 = v11;
      *(_QWORD *)(a1 + 16) = v11;
      if ( v9 < 4096 )
      {
        return -1073741492;
      }
      else
      {
        v10 = (unsigned int)(a3 + 4096);
        *(_QWORD *)(a1 + 8) = v10;
        result = HvpViewMapCreateViewsForRegion(a1, 4096LL, v10, 1);
        if ( result >= 0 )
          return 0;
      }
    }
  }
  return result;
}
