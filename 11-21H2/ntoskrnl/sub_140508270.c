/*
 * XREFs of sub_140508270 @ 0x140508270
 * Callers:
 *     sub_140251DC0 @ 0x140251DC0 (sub_140251DC0.c)
 * Callees:
 *     sub_140252164 @ 0x140252164 (sub_140252164.c)
 *     sub_1403D5A7C @ 0x1403D5A7C (sub_1403D5A7C.c)
 *     sub_1405081B8 @ 0x1405081B8 (sub_1405081B8.c)
 *     sub_140510F68 @ 0x140510F68 (sub_140510F68.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 */

__int64 __fastcall sub_140508270(unsigned int *a1, _DWORD *a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rcx
  __int64 v7; // rcx
  _DWORD v9[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10; // [rsp+38h] [rbp-48h]
  _DWORD *v11; // [rsp+40h] [rbp-40h]
  _OWORD v12[3]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v13; // [rsp+78h] [rbp-8h]
  ULONG_PTR *v14; // [rsp+A8h] [rbp+28h] BYREF

  v3 = 0;
  v14 = 0LL;
  v13 = 0LL;
  memset(v12, 0, sizeof(v12));
  v9[1] = 0;
  LODWORD(v11) = 0;
  if ( (int)sub_1405081B8(a1, a2, &v14, (__int64)v12) >= 0 )
  {
    v10 = a3;
    v9[0] = 1;
    v11 = a2 + 10;
    if ( (int)sub_140252164(v6, (__int64)v9, (__int64)&v12[1] + 8) >= 0 )
    {
      sub_1403D5A7C((__int64)a2, (__int64)v12);
      LOBYTE(v7) = *a2 == 3;
      sub_140510F68(v7, a2[10] & 0x3FFFFFFF, v12);
      return v3;
    }
    sub_14051E038((_DWORD)v14, 22, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 878);
  }
  else
  {
    sub_14051E038(0, 18, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 856);
  }
  return (unsigned int)-1073741275;
}
