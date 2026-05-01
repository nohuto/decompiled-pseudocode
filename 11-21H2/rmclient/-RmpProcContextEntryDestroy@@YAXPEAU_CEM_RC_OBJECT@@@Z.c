/*
 * XREFs of ?RmpProcContextEntryDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180013320
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1800010E0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000110C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18000B040 (__security_check_cookie.c)
 *     CempRcTableRemoveObject @ 0x18001554C (CempRcTableRemoveObject.c)
 *     CempHeapFree @ 0x180019A90 (CempHeapFree.c)
 */

void __fastcall RmpProcContextEntryDestroy(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  ULONG v2; // ecx
  int v3; // eax
  void *v4; // rcx
  void *v5; // rcx
  int v6; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-58h] BYREF
  int *v9; // [rsp+60h] [rbp-38h]
  ULONG v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  unsigned __int64 *v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+7Ch] [rbp-1Ch]

  v1 = a1 & -(__int64)(a1 != 0);
  if ( (unsigned int)dword_180032000 > 4 && tlgKeywordOn(4LL, 2LL) )
  {
    v3 = *(_DWORD *)(v1 + 80);
    v14 = 0;
    v11 = 0;
    v6 = v3;
    v12 = &v7;
    v9 = &v6;
    v10 = v2;
    v7 = v1;
    v13 = 8;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_180032000,
      (unsigned __int8 *)dword_18002B577,
      0LL,
      0LL,
      v2,
      &v8);
  }
  v4 = *(void **)(v1 + 40);
  if ( v4 )
    NtClose(v4);
  v5 = *(void **)(v1 + 48);
  if ( v5 )
    NtClose(v5);
  if ( *(_QWORD *)(v1 + 24) )
    __int2c();
  if ( *(_QWORD *)(v1 + 16) != -1LL )
    CempRcTableRemoveObject(*(_QWORD *)(v1 + 32) & 0xFFFFFFFFFFFFFFFCuLL, v1);
  *(_QWORD *)(v1 + 32) |= 0xFFFFFFFFFFFFFFFCuLL;
  CempHeapFree(v1);
}
