/*
 * XREFs of sub_1409A2F78 @ 0x1409A2F78
 * Callers:
 *     sub_1409A4208 @ 0x1409A4208 (sub_1409A4208.c)
 *     sub_1409A6850 @ 0x1409A6850 (sub_1409A6850.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x1402054C0 (RtlFindClearBitsAndSet.c)
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObInsertObject @ 0x14066BA50 (ObInsertObject.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     sub_1409A3BE0 @ 0x1409A3BE0 (sub_1409A3BE0.c)
 *     sub_1409A50A0 @ 0x1409A50A0 (sub_1409A50A0.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 *     sub_1409AA3FC @ 0x1409AA3FC (sub_1409AA3FC.c)
 */

__int64 __fastcall sub_1409A2F78(__int64 a1, ACCESS_MASK a2, unsigned __int8 a3, HANDLE *a4, PVOID Object, _QWORD *a6)
{
  _DWORD *v6; // r14
  ULONG ClearBitsAndSet; // esi
  unsigned int v12; // ebx
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // eax
  char *v17; // rbx
  __int64 v18; // rdx
  _QWORD *v19; // rdi
  _QWORD *v20; // rdx
  NTSTATUS inserted; // eax
  _QWORD *v22; // rax
  __int64 v24; // [rsp+20h] [rbp-78h]
  __int128 v25; // [rsp+50h] [rbp-48h] BYREF
  __int128 v26; // [rsp+60h] [rbp-38h]
  __int128 v27; // [rsp+70h] [rbp-28h]

  v6 = Object;
  *a4 = 0LL;
  Object = 0LL;
  *v6 = -1;
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(a1 + 56), 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    v12 = -1073741756;
    sub_1409A8628("TtmiAcquireTerminalId", 1599LL, 0xFFFFFFFFLL, 3221225540LL);
    v13 = 3221225540LL;
    v14 = 3221225540LL;
    v15 = 719LL;
LABEL_3:
    sub_1409A8628("TtmiCreateTerminal", v15, v14, v13);
    return v12;
  }
  v26 = 0LL;
  DWORD2(v26) = a3 == 0 ? 0x200 : 0;
  v25 = 0LL;
  LODWORD(v25) = 48;
  v27 = 0LL;
  v16 = sub_14072B3B0(0, qword_140D3CC60, (int)&v25, a3, v24, 288, 0, 0, &Object, 0LL);
  v12 = v16;
  if ( v16 < 0 )
  {
    v13 = (unsigned int)v16;
    v14 = (unsigned int)v16;
    v15 = 752LL;
    _bittestandreset(*(signed __int32 **)(a1 + 64), ClearBitsAndSet);
    goto LABEL_3;
  }
  v17 = (char *)Object;
  ObfReferenceObject(Object);
  memset(v17, 0, 0x120uLL);
  *((_DWORD *)v17 + 6) = 1416459348;
  *((_DWORD *)v17 + 7) = ClearBitsAndSet;
  if ( ClearBitsAndSet )
  {
    *((_DWORD *)v17 + 10) = 1;
    *((_DWORD *)v17 + 69) = 1;
    *((_DWORD *)v17 + 12) = 2;
    *((_QWORD *)v17 + 9) = 300000000LL;
  }
  else
  {
    *((_DWORD *)v17 + 10) = 3;
    *((_DWORD *)v17 + 69) = 3;
    LOBYTE(v18) = 1;
    *((_DWORD *)v17 + 12) = 0;
    *((_DWORD *)v17 + 9) |= 0x10u;
    v17 = (char *)Object;
    *((_QWORD *)Object + 10) = MEMORY[0xFFFFF78000000008];
    sub_1409A50A0(a1, v18, 26LL);
  }
  KeInitializeTimerEx((PKTIMER)(v17 + 88), NotificationTimer);
  KeInitializeDpc((PRKDPC)(v17 + 152), (PKDEFERRED_ROUTINE)sub_1405DFE20, v17);
  *((_QWORD *)v17 + 27) = 0LL;
  *((_QWORD *)v17 + 29) = sub_1409A3B80;
  *((_QWORD *)v17 + 30) = v17;
  _InterlockedAdd((volatile signed __int32 *)(a1 + 8), 1u);
  v19 = Object;
  *((_QWORD *)Object + 2) = a1;
  v20 = *(_QWORD **)(a1 + 48);
  if ( *v20 != a1 + 40 )
    __fastfail(3u);
  v19[1] = v20;
  *v19 = a1 + 40;
  *v20 = v19;
  *(_QWORD *)(a1 + 48) = v19;
  sub_1409AA3FC(v19, ClearBitsAndSet);
  inserted = ObInsertObject(v19, 0LL, a2, 1u, 0LL, a4);
  v12 = inserted;
  if ( inserted >= 0 )
  {
    v22 = a6;
    *v6 = ClearBitsAndSet;
    if ( v22 )
      *v22 = v19;
    else
      ObfDereferenceObject(v19);
    return 0;
  }
  else
  {
    sub_1409A8628("TtmiCreateTerminal", 843LL, (unsigned int)inserted, (unsigned int)inserted);
    sub_1409A3BE0(a1, v19);
  }
  return v12;
}
