/*
 * XREFs of sub_14062FF60 @ 0x14062FF60
 * Callers:
 *     <none>
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14062EE14 @ 0x14062EE14 (sub_14062EE14.c)
 */

void __fastcall sub_14062FF60(__int64 a1)
{
  char v2; // dl
  ULONG_PTR *v3; // rax
  char v4; // cl
  unsigned __int16 v5; // ax
  __int64 v6; // rcx
  int v7; // edx
  __int64 v8; // [rsp+30h] [rbp-38h] BYREF
  int v9; // [rsp+38h] [rbp-30h]
  int v10; // [rsp+3Ch] [rbp-2Ch]
  __int64 *v11; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+4Ch] [rbp-1Ch]

  v10 = 0;
  v2 = **(_BYTE **)(a1 + 184);
  if ( v2 == 3 )
    goto LABEL_11;
  if ( v2 == 4 )
    goto LABEL_10;
  if ( v2 != 9 )
  {
    if ( v2 != 14 )
      return;
    v3 = sub_14062EE14((IRP *)a1);
    if ( !v3 )
      return;
    v4 = *(_BYTE *)v3;
    if ( ((*(_BYTE *)v3 - 40) & 0x7F) != 0 )
    {
      if ( ((v4 - 42) & 0x7F) != 0 )
      {
        if ( v4 != 53 )
          return;
        goto LABEL_9;
      }
LABEL_10:
      v5 = 315;
      goto LABEL_12;
    }
LABEL_11:
    v5 = 314;
    goto LABEL_12;
  }
LABEL_9:
  v5 = 316;
LABEL_12:
  v6 = *(_QWORD *)(a1 + 152);
  v8 = a1;
  if ( v6 )
    v7 = *(_DWORD *)(v6 + 1232);
  else
    v7 = -1;
  v13 = 0;
  v11 = &v8;
  v9 = v7;
  v12 = 12;
  sub_14035EDE4((__int64)&v11, 1u, 0x80000002, v5, 0x501903u);
}
