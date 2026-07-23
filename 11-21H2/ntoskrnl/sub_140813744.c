/*
 * XREFs of sub_140813744 @ 0x140813744
 * Callers:
 *     sub_1408125C4 @ 0x1408125C4 (sub_1408125C4.c)
 *     sub_1409CDCC8 @ 0x1409CDCC8 (sub_1409CDCC8.c)
 * Callees:
 *     sub_1403A7718 @ 0x1403A7718 (sub_1403A7718.c)
 *     sub_1403A7778 @ 0x1403A7778 (sub_1403A7778.c)
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 *     wcstoul @ 0x1403E3880 (wcstoul.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_140811EB0 @ 0x140811EB0 (sub_140811EB0.c)
 *     sub_140811F10 @ 0x140811F10 (sub_140811F10.c)
 *     sub_140811FE0 @ 0x140811FE0 (sub_140811FE0.c)
 *     sub_1408127B8 @ 0x1408127B8 (sub_1408127B8.c)
 *     sub_14081287C @ 0x14081287C (sub_14081287C.c)
 *     sub_140813164 @ 0x140813164 (sub_140813164.c)
 *     sub_1408132F0 @ 0x1408132F0 (sub_1408132F0.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 *     sub_140813D88 @ 0x140813D88 (sub_140813D88.c)
 *     sub_1408140B4 @ 0x1408140B4 (sub_1408140B4.c)
 *     sub_140A1E7F0 @ 0x140A1E7F0 (sub_140A1E7F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140813744(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rdi
  int v4; // r12d
  char v5; // r8
  int v6; // ebx
  int v7; // eax
  const wchar_t **v8; // r14
  __int64 v9; // rsi
  bool v10; // zf
  int v11; // eax
  bool v12; // si
  int v13; // eax
  __int64 v15; // r9
  int v16; // eax
  int v17; // eax
  HANDLE Handle; // [rsp+20h] [rbp-10h] BYREF
  PVOID P; // [rsp+28h] [rbp-8h] BYREF
  ULONG v21; // [rsp+78h] [rbp+48h] BYREF
  __int64 v22; // [rsp+88h] [rbp+58h] BYREF

  *a1 = 0LL;
  v2 = 0LL;
  v21 = 0;
  Handle = 0LL;
  P = 0LL;
  v22 = 0LL;
  v4 = 0;
  sub_1408138F0(2LL, L"Opening system store. Flags: 0x%x", a2);
  sub_140811F10(16 * (v5 & 1));
  v6 = sub_140813D88(0LL, L"\\Registry\\Machine", 983103LL, &Handle);
  if ( v6 < 0 )
    goto LABEL_19;
  v7 = sub_14081287C(Handle, &P, &v21);
  v8 = (const wchar_t **)P;
  v6 = v7;
  if ( v7 < 0 )
    goto LABEL_17;
  v9 = 0LL;
  v6 = -1073741275;
  v10 = v21 == 0;
  if ( !v21 )
    goto LABEL_7;
  while ( 1 )
  {
    if ( wcsnicmp(v8[v9], L"BCD", 3uLL) )
      goto LABEL_5;
    if ( wcstoul(v8[v9] + 3, 0LL, 10) == -1 )
      goto LABEL_5;
    sub_1408138F0(2LL, L"Found loaded store at key %s", v8[v9]);
    v16 = sub_140813164((__int64)Handle, v8[v9], 0x20019u, &v22);
    v2 = v22;
    v6 = v16;
    if ( v16 < 0 )
      goto LABEL_5;
    if ( sub_1408127B8(v22) )
      break;
    sub_1408132F0((void *)v2);
LABEL_5:
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= v21 )
      goto LABEL_6;
  }
  sub_1408138F0(2LL, L"Store %s is the system store", v8[v9]);
  v6 = 0;
  v4 = 0;
LABEL_6:
  v10 = (_DWORD)v9 == v21;
LABEL_7:
  if ( !v10 )
  {
LABEL_11:
    if ( (a2 & 2) != 0 )
    {
      v2 |= 2uLL;
      goto LABEL_16;
    }
    sub_1408138F0(2LL, L"Synchronizing store with firmware");
    v12 = sub_1403A7778(v2);
    v13 = sub_1408140B4() - 1;
    if ( !v13 )
      goto LABEL_13;
    v17 = v13 - 1;
    if ( v17 )
    {
      if ( v17 == 1 )
      {
LABEL_13:
        v6 = 0;
        goto LABEL_14;
      }
      v6 = -1073741637;
      v15 = 3221225659LL;
    }
    else
    {
      v6 = sub_140A1E7F0(v2);
      v15 = (unsigned int)v6;
      if ( v6 >= 0 )
      {
LABEL_14:
        if ( !v12 )
          sub_1403A7718(v2, 0);
LABEL_16:
        *a1 = v2;
        if ( v6 < 0 )
          goto LABEL_34;
        goto LABEL_17;
      }
    }
    sub_1408138F0(4LL, L"Failed to bind with firmware. Flags: 0x%x Status: %x", a2, v15);
    goto LABEL_34;
  }
  sub_1408138F0(2LL, L"The system store is not already loaded");
  v22 = 0LL;
  if ( (a2 & 4) != 0 )
  {
    sub_1408138F0(4LL, L"Specified flags prevent opening unloaded system store");
    v6 = -1073741275;
  }
  else
  {
    v11 = sub_140811FE0(&v22);
    v2 = v22;
    v6 = v11;
    if ( v11 >= 0 )
    {
      v4 = 1;
      goto LABEL_11;
    }
LABEL_34:
    if ( v2 )
      sub_140811EB0(v2, v4 != 0 ? 2 : 0);
  }
LABEL_17:
  if ( v8 )
    ExFreePoolWithTag(v8, 0x4B444342u);
LABEL_19:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
