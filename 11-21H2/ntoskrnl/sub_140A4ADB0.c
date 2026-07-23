/*
 * XREFs of sub_140A4ADB0 @ 0x140A4ADB0
 * Callers:
 *     sub_14038BB00 @ 0x14038BB00 (sub_14038BB00.c)
 *     sub_14038BCE0 @ 0x14038BCE0 (sub_14038BCE0.c)
 * Callees:
 *     sub_14036B86C @ 0x14036B86C (sub_14036B86C.c)
 *     sub_14038BF18 @ 0x14038BF18 (sub_14038BF18.c)
 *     sub_14038BF3C @ 0x14038BF3C (sub_14038BF3C.c)
 *     sub_1403A3F0C @ 0x1403A3F0C (sub_1403A3F0C.c)
 *     sub_1403A4264 @ 0x1403A4264 (sub_1403A4264.c)
 *     sub_1405D6E84 @ 0x1405D6E84 (sub_1405D6E84.c)
 */

NTSTATUS __fastcall sub_140A4ADB0(__int64 a1, __int64 a2)
{
  char v4; // r8
  __int64 v5; // rdx
  _QWORD *v6; // r9
  ULONG v7; // r15d
  int v8; // r10d
  int v9; // esi
  _SLIST_ENTRY *v10; // r14
  PIRP v11; // rbp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _IO_STACK_LOCATION *v13; // rax
  void *v14; // rax
  _SLIST_ENTRY *v16; // [rsp+90h] [rbp+8h] BYREF
  PIRP Irp; // [rsp+98h] [rbp+10h] BYREF

  Irp = 0LL;
  v16 = 0LL;
  v4 = *(_BYTE *)(a1 + 464) || **(_QWORD **)(a1 + 56) != *(_QWORD *)(a2 + 64);
  v7 = sub_14038BF18(DWORD2(xmmword_140C22740), *(_DWORD *)(a1 + 4), v4);
  v9 = v8;
  if ( v7 == 7 && *v6 == *(_QWORD *)(a2 + 64) && *(_BYTE *)a1 == 2 )
  {
    *v6 = 0LL;
    v9 = *(_DWORD *)(a1 + 4);
  }
  sub_1403A3F0C(*(struct _DEVICE_OBJECT **)(a2 + 48), v5, *(_BYTE *)a1, 0, v9, 1, 0, 0LL, 0LL, (__int64 *)&Irp, &v16);
  v10 = v16;
  v11 = Irp;
  *((_QWORD *)&v16[13].Next + 1) = a2;
  LOBYTE(v10[14].Next) = 0;
  CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].Parameters.Create.Options = 0;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = v9;
  CurrentStackLocation[-1].Parameters.Create.EaLength = v7;
  CurrentStackLocation[-1].Parameters.Read.Length = DWORD1(xmmword_140C22740);
  v13 = v11->Tail.Overlay.CurrentStackLocation;
  v13[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)sub_140A50A10;
  v13[-1].Context = v10;
  v13[-1].Control = -32;
  if ( (xmmword_140D06910 & 0x8000) != 0 )
    sub_1405D6E84(*(_QWORD *)(a2 + 48), a2, (__int64)v11);
  if ( v9 > 1 && (unsigned __int8)(*(_BYTE *)a1 - 2) <= 1u )
  {
    v14 = sub_14036B86C(*(_QWORD *)(a2 + 48), 0x72496F50u);
    sub_14038BF3C((__int64)v14, *(_BYTE *)a1 == 2);
    LOBYTE(v10[14].Next) = 1;
  }
  return sub_1403A4264(v11);
}
