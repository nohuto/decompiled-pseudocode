/*
 * XREFs of sub_14076B24C @ 0x14076B24C
 * Callers:
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 * Callees:
 *     sub_140749588 @ 0x140749588 (sub_140749588.c)
 *     sub_14077198C @ 0x14077198C (sub_14077198C.c)
 */

void __fastcall sub_14076B24C(__int64 a1, __int64 a2, char a3)
{
  int v3; // r10d
  __int64 v5; // rcx
  struct _DEVICE_OBJECT *v7; // rcx
  int v8; // ecx
  int *v9; // rdx
  int v10; // r8d
  int v11; // [rsp+70h] [rbp+18h] BYREF

  v3 = -1;
  v5 = *(_QWORD *)(a1 + 16);
  v11 = -1;
  if ( v5 )
  {
    v7 = *(struct _DEVICE_OBJECT **)(v5 + 32);
    if ( (v7->DeviceObjectExtension->ExtensionFlags & 0x400) != 0 )
    {
      v3 = sub_140749588(v7);
      v11 = v3;
    }
  }
  if ( !a3 || v3 != -1 )
  {
    if ( v3 == -1 )
    {
      v8 = 0;
      v9 = 0LL;
      v10 = 0;
    }
    else
    {
      v8 = 4;
      v9 = &v11;
      v10 = 7;
    }
    sub_14077198C(
      qword_140D00AC0,
      *(_QWORD *)(a1 + 48),
      1,
      0LL,
      (__int64)&stru_140010AF0,
      v10,
      (__int64)v9,
      v8,
      a3 != 0 ? 0x20000 : 0);
  }
}
