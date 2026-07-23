/*
 * XREFs of sub_140A0A644 @ 0x140A0A644
 * Callers:
 *     sub_1409ACAD0 @ 0x1409ACAD0 (sub_1409ACAD0.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_140647164 @ 0x140647164 (sub_140647164.c)
 *     sub_140647850 @ 0x140647850 (sub_140647850.c)
 *     sub_140A0A574 @ 0x140A0A574 (sub_140A0A574.c)
 *     sub_140A0A95C @ 0x140A0A95C (sub_140A0A95C.c)
 *     sub_140A0AC10 @ 0x140A0AC10 (sub_140A0AC10.c)
 */

__int64 __fastcall sub_140A0A644(__int64 a1, __int64 *a2, size_t *a3)
{
  int v5; // ebx
  __int64 v6; // rcx
  int v7; // eax
  size_t v8; // rax
  ULONG_PTR v9; // rcx
  HANDLE Handle; // [rsp+20h] [rbp-10h] BYREF
  size_t v12; // [rsp+28h] [rbp-8h] BYREF
  ULONG_PTR v13; // [rsp+58h] [rbp+28h] BYREF

  v12 = 0LL;
  Handle = (HANDLE)-1LL;
  v13 = 0LL;
  v5 = sub_140A0A574(a1, &v13, &v12);
  if ( v5 < 0 )
    goto LABEL_10;
  if ( sub_140647850(v13) )
  {
LABEL_9:
    v8 = v12;
    *a2 = v6;
    v9 = 0LL;
    v13 = 0LL;
    *a3 = v8;
    goto LABEL_11;
  }
  v7 = sub_140A0AC10(&Handle);
  v5 = v7;
  if ( v7 >= 0 )
  {
    v5 = sub_140A0A95C(Handle);
  }
  else
  {
    if ( v7 != -1073741772 )
      goto LABEL_10;
    v5 = 0;
  }
  if ( v5 >= 0 )
  {
    v6 = v13;
    goto LABEL_9;
  }
LABEL_10:
  v9 = v13;
LABEL_11:
  if ( Handle != (HANDLE)-1LL )
  {
    ZwClose(Handle);
    v9 = v13;
  }
  if ( v9 )
    sub_140647164(v9);
  return (unsigned int)v5;
}
