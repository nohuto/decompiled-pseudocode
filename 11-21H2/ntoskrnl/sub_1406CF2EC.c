/*
 * XREFs of sub_1406CF2EC @ 0x1406CF2EC
 * Callers:
 *     sub_14069946C @ 0x14069946C (sub_14069946C.c)
 *     sub_140A2D248 @ 0x140A2D248 (sub_140A2D248.c)
 * Callees:
 *     ZwEnumerateValueKey @ 0x14041B9C0 (ZwEnumerateValueKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406CF2EC(
        HANDLE KeyHandle,
        ULONG Index,
        void *a3,
        _DWORD *a4,
        _DWORD *a5,
        void *a6,
        unsigned int *a7)
{
  unsigned __int64 v9; // rax
  KEY_VALUE_INFORMATION_CLASS v12; // ebp
  ULONG Length; // ebx
  _DWORD *Pool2; // rsi
  unsigned int v15; // edi
  size_t v16; // r8
  __int64 v17; // rbx
  ULONG v19; // ecx
  unsigned int v20; // eax
  __int64 v21; // rbx
  size_t v22; // r8
  ULONG ResultLength[4]; // [rsp+30h] [rbp-38h] BYREF

  ResultLength[0] = 0;
  v9 = 2LL * (unsigned int)*a4;
  if ( !a7 )
  {
    v12 = KeyValueBasicInformation;
    if ( v9 <= 0xFFFFFFFF )
    {
      Length = v9 + 16;
      if ( (int)v9 + 16 >= (unsigned int)v9 )
        goto LABEL_4;
    }
    return (unsigned int)-1073741675;
  }
  v12 = KeyValueFullInformation;
  if ( v9 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v19 = v9 + 24;
  if ( (int)v9 + 24 < (unsigned int)v9 )
    return (unsigned int)-1073741675;
  Length = v19 + *a7;
  if ( Length < v19 )
    return (unsigned int)-1073741675;
LABEL_4:
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, Length, 1279739218LL);
  if ( Pool2 )
  {
    v15 = ZwEnumerateValueKey(KeyHandle, Index, v12, Pool2, Length, ResultLength);
    if ( !v15 || v15 == -2147483643 )
    {
      if ( v12 )
      {
        if ( a5 )
          *a5 = Pool2[1];
        if ( v15
          || (unsigned int)*a4 < ((unsigned __int64)(unsigned int)Pool2[4] >> 1) + 1
          || (v20 = Pool2[3], *a7 < v20) )
        {
          v15 = -1073741789;
          *a4 = (Pool2[4] >> 1) + 1;
          *a7 = Pool2[3];
        }
        else
        {
          v21 = Pool2[4] >> 1;
          *a7 = v20;
          v22 = (unsigned int)Pool2[4];
          *a4 = v21;
          memmove(a3, Pool2 + 5, v22);
          *((_WORD *)a3 + v21) = 0;
          memmove(a6, (char *)Pool2 + (unsigned int)Pool2[2], (unsigned int)Pool2[3]);
        }
      }
      else
      {
        if ( a5 )
          *a5 = Pool2[1];
        if ( v15 || (v16 = (unsigned int)Pool2[2], (unsigned int)*a4 < (v16 >> 1) + 1) )
        {
          v15 = -1073741789;
          LODWORD(v17) = (Pool2[2] >> 1) + 1;
        }
        else
        {
          v17 = (unsigned int)v16 >> 1;
          memmove(a3, Pool2 + 3, v16);
          *((_WORD *)a3 + v17) = 0;
        }
        *a4 = v17;
      }
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v15;
}
