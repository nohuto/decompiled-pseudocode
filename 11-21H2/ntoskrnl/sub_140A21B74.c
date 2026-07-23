/*
 * XREFs of sub_140A21B74 @ 0x140A21B74
 * Callers:
 *     sub_140A21C40 @ 0x140A21C40 (sub_140A21C40.c)
 * Callees:
 *     sub_1406BB294 @ 0x1406BB294 (sub_1406BB294.c)
 *     sub_140A216DC @ 0x140A216DC (sub_140A216DC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A21B74(_DWORD *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  int v6; // ebx
  int v8; // [rsp+30h] [rbp-10h] BYREF
  PVOID P; // [rsp+38h] [rbp-8h] BYREF
  ULONG v10; // [rsp+70h] [rbp+30h] BYREF
  int v11; // [rsp+78h] [rbp+38h] BYREF

  v11 = 0;
  v8 = 0;
  v10 = 0;
  P = 0LL;
  v6 = sub_1406BB294(
         (__int64)a1,
         L"SystemPartition",
         (__int64)L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Syspart",
         a4,
         &P,
         &v10);
  if ( v6 >= 0 )
  {
    if ( v10 >= 4 )
    {
      v6 = sub_140A216DC((const WCHAR *)P, &v11, &v8);
      if ( v6 >= 0 )
      {
        *a1 = v11;
        *a2 = v8;
      }
    }
    else
    {
      v6 = -1073741823;
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v6;
}
