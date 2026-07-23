/*
 * XREFs of sub_140811F10 @ 0x140811F10
 * Callers:
 *     sub_1408125C4 @ 0x1408125C4 (sub_1408125C4.c)
 *     sub_140813744 @ 0x140813744 (sub_140813744.c)
 * Callees:
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 *     wcstoul @ 0x1403E3880 (wcstoul.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1408072C0 @ 0x1408072C0 (sub_1408072C0.c)
 *     sub_140807354 @ 0x140807354 (sub_140807354.c)
 *     sub_140812540 @ 0x140812540 (sub_140812540.c)
 *     sub_1408127B8 @ 0x1408127B8 (sub_1408127B8.c)
 *     sub_14081287C @ 0x14081287C (sub_14081287C.c)
 *     sub_140813164 @ 0x140813164 (sub_140813164.c)
 *     sub_1408132F0 @ 0x1408132F0 (sub_1408132F0.c)
 *     sub_140813D88 @ 0x140813D88 (sub_140813D88.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140811F10(char a1)
{
  char v2; // r13
  const wchar_t **v3; // rdi
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // r8
  char v7; // al
  PVOID P[2]; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v9; // [rsp+68h] [rbp+38h] BYREF
  __int64 v10; // [rsp+70h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+48h] BYREF

  v10 = 0LL;
  v9 = 0;
  P[0] = 0LL;
  Handle = 0LL;
  v2 = sub_140812540();
  if ( (int)sub_140813D88(0LL, L"\\Registry\\Machine", 983103LL, &Handle) >= 0 )
  {
    if ( (int)sub_14081287C(Handle, P, &v9) >= 0 && v9 )
    {
      v3 = (const wchar_t **)P[0];
      v4 = v9;
      do
      {
        if ( !wcsnicmp(*v3, L"BCD", 3uLL)
          && wcstoul(*v3 + 3, 0LL, 10) != -1
          && (int)sub_140813164(Handle, *v3, 131097LL, &v10) >= 0 )
        {
          v7 = sub_1408127B8(v10, v5, v6);
          if ( (a1 & 0x10) != 0 && v7 )
          {
            sub_1408072C0(v10);
          }
          else if ( (a1 & 8) != 0 || v2 || !v7 )
          {
            sub_140807354(v10, 0);
          }
          else
          {
            sub_1408132F0(v10);
          }
        }
        ++v3;
        --v4;
      }
      while ( v4 );
    }
    if ( P[0] )
      ExFreePoolWithTag(P[0], 0x4B444342u);
  }
  if ( Handle )
    ZwClose(Handle);
}
