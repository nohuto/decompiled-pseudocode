/*
 * XREFs of sub_140859318 @ 0x140859318
 * Callers:
 *     sub_1409AC180 @ 0x1409AC180 (sub_1409AC180.c)
 *     sub_140AFE184 @ 0x140AFE184 (sub_140AFE184.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     PsGetPermanentSiloContext @ 0x140211FA0 (PsGetPermanentSiloContext.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     PsIsHostSilo @ 0x1402A6DF0 (PsIsHostSilo.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406686C8 @ 0x1406686C8 (sub_1406686C8.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 */

int __fastcall sub_140859318(PVOID Object)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 *v4; // r14
  _QWORD *v5; // rcx
  int result; // eax
  int v7; // ebx
  __int64 v8; // rbx
  PVOID v9; // rcx
  _DWORD v10[2]; // [rsp+40h] [rbp-30h] BYREF
  HANDLE v11; // [rsp+48h] [rbp-28h]
  __int64 *v12; // [rsp+50h] [rbp-20h]
  int v13; // [rsp+58h] [rbp-18h]
  int v14; // [rsp+5Ch] [rbp-14h]
  __int128 v15; // [rsp+60h] [rbp-10h]
  HANDLE Handle; // [rsp+A8h] [rbp+38h] BYREF
  PVOID v17; // [rsp+B0h] [rbp+40h] BYREF
  PVOID Objecta; // [rsp+B8h] [rbp+48h] BYREF

  v17 = 0LL;
  v14 = 0;
  Handle = 0LL;
  Objecta = 0LL;
  v10[1] = 0;
  v2 = (__int64 *)sub_140204738((__int64)Object);
  v3 = 37LL;
  v4 = v2;
  v2[15] = 0LL;
  v5 = v2 + 16;
  v2[90] = 0LL;
  do
  {
    v5[1] = v5;
    *v5 = v5;
    v5 += 2;
    --v3;
  }
  while ( v3 );
  if ( PsIsHostSilo((__int64)Object) )
    return 0;
  result = PsGetPermanentSiloContext((__int64)Object, dword_140D05060, (unsigned __int64 *)&Objecta);
  if ( result >= 0 )
  {
    result = ObOpenObjectByPointer(Objecta, 0x240u, 0LL, 2u, qword_140C24FB8, 0, &Handle);
    if ( result >= 0 )
    {
      v11 = Handle;
      v10[0] = 48;
      v12 = &qword_140A383F8;
      v13 = 576;
      v15 = 0LL;
      v7 = sub_1406686C8((__int64)v10, 0LL, 2u, (__int64)qword_140C24FB8, 0, 0LL, (__int64 *)&v17);
      ZwClose(Handle);
      if ( v7 < 0 )
        return v7;
      v8 = *((_QWORD *)v17 + 38);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 240), 0x10uLL) <= 0 )
        __fastfail(0xEu);
      *v4 = (v8 + 15) & -(__int64)(v8 != 0);
      ObfReferenceObjectWithTag(Object, 0x6D44624Fu);
      v9 = v17;
      *(_QWORD *)(v8 + 16) = Object;
      ObfDereferenceObject(v9);
      return 0;
    }
  }
  return result;
}
