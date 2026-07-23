/*
 * XREFs of sub_140567C08 @ 0x140567C08
 * Callers:
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 *     sub_140567874 @ 0x140567874 (sub_140567874.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     sub_14028FBF0 @ 0x14028FBF0 (sub_14028FBF0.c)
 *     sub_1403BF7F4 @ 0x1403BF7F4 (sub_1403BF7F4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140567544 @ 0x140567544 (sub_140567544.c)
 *     sub_140568024 @ 0x140568024 (sub_140568024.c)
 *     sub_1405909B0 @ 0x1405909B0 (sub_1405909B0.c)
 */

void __fastcall sub_140567C08(_BYTE *a1, const void **a2, unsigned int a3, char a4)
{
  char v7; // r13
  __int64 v8; // r14
  DWORD TimeDateStamp; // r15d
  const void *v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned __int16 *v13; // rcx
  __int64 v14; // rbx
  PIMAGE_NT_HEADERS v15; // rax
  __int64 *v16; // r9
  _BYTE v17[8]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+48h] [rbp-D0h] BYREF
  char v19[128]; // [rsp+50h] [rbp-C8h] BYREF

  v18 = 0LL;
  v17[0] = 0;
  v7 = 1;
  if ( a1 )
    *a1 = 0;
  if ( a3 )
  {
    v8 = a3;
    while ( 1 )
    {
      TimeDateStamp = 0;
      v10 = (const void *)sub_140568024(*a2, &v18, 1LL, v17);
      if ( v10 )
        break;
      v10 = *a2;
      v11 = sub_1405909B0(*a2);
      v12 = v11;
      if ( v11 )
      {
        if ( a4 )
        {
          v13 = (unsigned __int16 *)v11;
          goto LABEL_14;
        }
        goto LABEL_15;
      }
LABEL_20:
      ++a2;
      if ( !--v8 )
        return;
    }
    v14 = v18;
    if ( sub_14028FBF0(*(_QWORD *)(v18 + 48)) == 1 )
    {
      v15 = RtlImageNtHeader(*(PVOID *)(v14 + 48));
      if ( v15 )
        TimeDateStamp = v15->FileHeader.TimeDateStamp;
    }
    v12 = v14 + 88;
    if ( a4 )
    {
      v13 = (unsigned __int16 *)v12;
LABEL_14:
      sub_140567544(v13, v19);
    }
LABEL_15:
    if ( a1 )
    {
      v16 = qword_140438420;
      if ( !v7 )
        v16 = qword_140438430;
      sub_1403BF7F4(
        a1,
        128LL,
        (__int64)"%s**  %12s - Address %p base at %p, DateStamp %08lx\r\n",
        (const char *)v16,
        v19,
        *a2,
        v10,
        TimeDateStamp);
    }
    qword_140D01150 = v12;
    v7 = 0;
    goto LABEL_20;
  }
}
