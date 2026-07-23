/*
 * XREFs of MmRemovePhysicalMemory @ 0x140969D90
 * Callers:
 *     sub_140A092FC @ 0x140A092FC (sub_140A092FC.c)
 * Callees:
 *     sub_140213FA8 @ 0x140213FA8 (sub_140213FA8.c)
 *     sub_140277D10 @ 0x140277D10 (sub_140277D10.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     sub_1405838B0 @ 0x1405838B0 (sub_1405838B0.c)
 *     sub_14058E448 @ 0x14058E448 (sub_14058E448.c)
 *     sub_14058EA88 @ 0x14058EA88 (sub_14058EA88.c)
 *     sub_1405BD66C @ 0x1405BD66C (sub_1405BD66C.c)
 *     sub_1405BDF64 @ 0x1405BDF64 (sub_1405BDF64.c)
 *     sub_1405BE81C @ 0x1405BE81C (sub_1405BE81C.c)
 *     sub_140969850 @ 0x140969850 (sub_140969850.c)
 *     sub_14096E960 @ 0x14096E960 (sub_14096E960.c)
 */

NTSTATUS __stdcall MmRemovePhysicalMemory(PPHYSICAL_ADDRESS StartAddress, PLARGE_INTEGER NumberOfBytes)
{
  unsigned __int64 QuadPart; // rdi
  ULONG_PTR *v3; // rbx
  unsigned __int64 v4; // r14
  int v6; // ecx
  bool v7; // r15
  unsigned __int64 v8; // rdi
  NTSTATUS v9; // esi
  int v10; // eax
  int v11; // ecx
  unsigned __int64 *v13; // [rsp+70h] [rbp-9h] BYREF
  __int128 v14; // [rsp+78h] [rbp-1h]
  int v15; // [rsp+88h] [rbp+Fh]
  int v16; // [rsp+8Ch] [rbp+13h]
  LONGLONG v17; // [rsp+E0h] [rbp+67h]
  ULONG_PTR *v18; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned __int64 v19; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v20; // [rsp+F8h] [rbp+7Fh] BYREF

  QuadPart = StartAddress->QuadPart;
  v3 = 0LL;
  v4 = (unsigned __int64)NumberOfBytes->QuadPart >> 12;
  v17 = StartAddress->QuadPart;
  v6 = StartAddress->QuadPart;
  v20 = 0LL;
  v16 = 0;
  v18 = 0LL;
  v19 = 0LL;
  v7 = (v17 & 1) != 0 && (v17 & 0xFFF) != 0;
  if ( v7 )
  {
    LODWORD(v17) = v6 & 0xFFFFFFFE;
    QuadPart = v17;
  }
  v8 = QuadPart >> 12;
  if ( v8 >= v4 + v8 )
  {
    v9 = -1073741585;
    goto LABEL_26;
  }
  v9 = sub_1405838B0(v8, (__int64 *)&v18);
  if ( v9 < 0 )
  {
    v3 = v18;
    goto LABEL_26;
  }
  if ( v7 )
  {
    v3 = v18;
    if ( v18 != &StartContext )
    {
      v9 = -1073741637;
      goto LABEL_26;
    }
    v10 = sub_14058E448((__int64)v18, v8, v4);
  }
  else
  {
    v3 = v18;
    v10 = sub_140277D10((__int64)v18, v8, v4 + v8 - 1, 0LL, 0, v4, 1u, 0x80000000, 0x80000000, 202375168, 1, 0LL, &v20);
  }
  v9 = v10;
  if ( v10 >= 0 )
  {
    if ( v3 == &StartContext )
    {
      v9 = sub_140969850(v8, v4, 0x20u);
      if ( v9 < 0 )
      {
LABEL_14:
        if ( v7 )
          sub_14058EA88(v8, v4);
        else
          sub_140213FA8(v8, v4);
        goto LABEL_26;
      }
    }
    else
    {
      if ( !sub_1405BD66C(&v19, v8, v4, 2) )
      {
        v9 = -1073741670;
        goto LABEL_26;
      }
      v13 = &v19;
      v11 = 2055;
      if ( _bittest((const signed __int32 *)v3 + 1, 8u) )
        v11 = 3079;
      v15 = v11;
      v14 = 0LL;
      v9 = sub_1405BE81C((__int16 *)v3, (__int64)&StartContext, (__int64)&v13, v4, 0LL);
      if ( v9 < 0 )
        goto LABEL_14;
      if ( _bittest((const signed __int32 *)v3 + 1, 8u) )
        sub_14096E960(v3);
    }
    NumberOfBytes->QuadPart = v4 << 12;
  }
LABEL_26:
  sub_1405BDF64(&v19);
  if ( v3 )
    sub_1403606C4(v3[22]);
  return v9;
}
