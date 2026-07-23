/*
 * XREFs of sub_140A5B810 @ 0x140A5B810
 * Callers:
 *     sub_140862398 @ 0x140862398 (sub_140862398.c)
 *     sub_140986F94 @ 0x140986F94 (sub_140986F94.c)
 *     sub_140A49250 @ 0x140A49250 (sub_140A49250.c)
 *     sub_140A4A768 @ 0x140A4A768 (sub_140A4A768.c)
 *     sub_140A6AA08 @ 0x140A6AA08 (sub_140A6AA08.c)
 * Callees:
 *     sub_14032A72C @ 0x14032A72C (sub_14032A72C.c)
 *     sub_14038A880 @ 0x14038A880 (sub_14038A880.c)
 *     sub_14038E4BC @ 0x14038E4BC (sub_14038E4BC.c)
 *     sub_1403DD3F8 @ 0x1403DD3F8 (sub_1403DD3F8.c)
 *     sub_14059673C @ 0x14059673C (sub_14059673C.c)
 */

__int64 sub_140A5B810()
{
  __int64 v0; // rax
  int v1; // r8d
  int v2; // r8d
  int v3; // edx
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  unsigned int v8; // edx

  v0 = sub_14032A72C(*((_QWORD *)KeGetCurrentThread() + 23));
  if ( !v1 )
  {
    v3 = 0;
    goto LABEL_4;
  }
  v2 = v1 - 1;
  if ( !v2 )
  {
    v3 = 1;
LABEL_4:
    sub_1403DD3F8(v0, v3);
    return 0LL;
  }
  v5 = v2 - 1;
  if ( !v5 )
  {
    sub_14059673C(v0);
    return 0LL;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    sub_14038A880(v0, 0);
    return 0LL;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v8 = 8;
    goto LABEL_14;
  }
  if ( v7 == 1 )
  {
    v8 = 1;
LABEL_14:
    sub_14038E4BC(v0, v8);
    return 0LL;
  }
  return 3221225659LL;
}
