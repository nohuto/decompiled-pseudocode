/*
 * XREFs of sub_14071CAFC @ 0x14071CAFC
 * Callers:
 *     sub_14072DDC0 @ 0x14072DDC0 (sub_14072DDC0.c)
 * Callees:
 *     sub_14020A400 @ 0x14020A400 (sub_14020A400.c)
 *     PsReleaseSiloHardReference @ 0x14020B0E0 (PsReleaseSiloHardReference.c)
 *     PsAcquireSiloHardReference @ 0x14020B190 (PsAcquireSiloHardReference.c)
 *     sub_1402A34C8 @ 0x1402A34C8 (sub_1402A34C8.c)
 *     sub_1402A38B4 @ 0x1402A38B4 (sub_1402A38B4.c)
 *     IoGetSilo @ 0x1402A3FD0 (IoGetSilo.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     PsIsHostSilo @ 0x1402A6DF0 (PsIsHostSilo.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByPointer @ 0x1402E0270 (ObReferenceObjectByPointer.c)
 *     sub_1403A0B00 @ 0x1403A0B00 (sub_1403A0B00.c)
 */

int __fastcall sub_14071CAFC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v9; // ebx
  int result; // eax
  int v11; // eax
  __int64 v12; // rcx
  __int64 Silo; // rax
  __int64 v14; // rdx
  _DWORD *v15; // rdi
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  void *v19; // rsi
  _QWORD *v20; // [rsp+60h] [rbp+18h] BYREF

  v9 = -1073741811;
  if ( (*(_DWORD *)(a3 + 152) & 2) != 0 )
  {
    result = sub_1402A34C8(a1, 1, 1);
    v9 = result;
    if ( result < 0 )
      return result;
  }
  v11 = *(_DWORD *)(a3 + 152);
  if ( (v11 & 1) != 0 )
  {
    v20 = 0LL;
    result = sub_1402A38B4(a1, 1u, 0x20u, 1, &v20, 0LL);
    v9 = result;
    if ( result < 0 )
      return result;
    *v20 = *(_QWORD *)(a3 + 176);
    v11 = *(_DWORD *)(a3 + 152);
  }
  if ( (v11 & 4) != 0 )
  {
    v20 = 0LL;
    if ( !sub_1403A0B00(a2)
      && (*(_DWORD *)(a3 + 88) != 1 || (*(_BYTE *)(a3 + 70) & 6) != 0 || (a5 & 0xFEEDFF56) != 0)
      && !*(_BYTE *)(a3 + 137) )
    {
      return -1072103361;
    }
    v18 = *(_QWORD *)(a3 + 184);
    if ( !v18 )
      return -1073741811;
    if ( *(_WORD *)v18 != 16 )
      return -1073741811;
    v19 = *(void **)(v18 + 8);
    if ( !v19 )
      return -1073741811;
    result = ObReferenceObjectByPointer(*(PVOID *)(v18 + 8), 0x120037u, (POBJECT_TYPE)TmTransactionObjectType, 0);
    if ( result < 0 )
      return result;
    v9 = sub_1402A38B4(a1, 0, 0x10u, 1, &v20, 0LL);
    if ( v9 < 0 )
    {
      ObfDereferenceObject(v19);
      return v9;
    }
    *(_OWORD *)v20 = *(_OWORD *)*(_QWORD *)(a3 + 184);
    v11 = *(_DWORD *)(a3 + 152);
  }
  if ( (v11 & 0x40) == 0 && PsIsHostSilo(*(_QWORD *)(a4 + 8)) )
  {
    v12 = *(_QWORD *)(a3 + 40);
    if ( !v12 )
      return v9;
    Silo = IoGetSilo(v12);
    if ( PsIsHostSilo(Silo) )
      return v9;
  }
  v14 = *(_QWORD *)(a3 + 40);
  v9 = 0;
  v15 = *(_DWORD **)(a4 + 8);
  if ( v14 && sub_14020A400(*(_QWORD *)(a4 + 8)) )
    v15 = (_DWORD *)IoGetSilo(v17);
  if ( PsIsHostSilo((__int64)v15) )
    return v9;
  v20 = 0LL;
  result = PsAcquireSiloHardReference(v15);
  if ( result >= 0 )
  {
    v9 = sub_1402A38B4(a1, 7u, 0x10u, 1, &v20, 0LL);
    if ( v9 < 0 )
    {
      PsReleaseSiloHardReference(v15);
    }
    else
    {
      v16 = v20;
      *(_DWORD *)v20 = 16;
      v16[1] = v15;
      *((_DWORD *)v16 + 1) |= 1u;
      ObfReferenceObjectWithTag(v15, 0x70536F49u);
    }
    return v9;
  }
  return result;
}
