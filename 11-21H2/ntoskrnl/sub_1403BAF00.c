/*
 * XREFs of sub_1403BAF00 @ 0x1403BAF00
 * Callers:
 *     sub_1403BAF00 @ 0x1403BAF00 (sub_1403BAF00.c)
 *     sub_1403BB0A0 @ 0x1403BB0A0 (sub_1403BB0A0.c)
 * Callees:
 *     sub_140354420 @ 0x140354420 (sub_140354420.c)
 *     sub_1403AEA08 @ 0x1403AEA08 (sub_1403AEA08.c)
 *     sub_1403AEF08 @ 0x1403AEF08 (sub_1403AEF08.c)
 *     sub_1403BAF00 @ 0x1403BAF00 (sub_1403BAF00.c)
 *     sub_1403BB040 @ 0x1403BB040 (sub_1403BB040.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14050D048 @ 0x14050D048 (sub_14050D048.c)
 */

__int64 __fastcall sub_1403BAF00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rbx
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // r9
  __int128 v8; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int64 v9; // [rsp+60h] [rbp+8h] BYREF

  v4 = qword_140C4E4B0;
  sub_1403AEF08(0xD2u, (int)sub_140305670, 13, a4, -3LL);
  *((_QWORD *)&v8 + 1) = (unsigned __int16)(dword_140D0E5E0[0] >> 6);
  *(_QWORD *)&v8 = 1LL << (dword_140D0E5E0[0] & 0x3F);
  LODWORD(result) = sub_1403AEA08(v4, 0xD1u, 13, v5, -3LL, 0, &v8, (__int64)sub_1403D3380);
  if ( (int)result < 0 )
    goto LABEL_11;
  if ( qword_140C4E4C8 )
  {
    LODWORD(result) = sub_1403AEA08(qword_140C4E4C8, 0xD3u, 13, v7, -3LL, 4u, &v8, (__int64)sub_140521AC0);
    if ( (int)result < 0 )
      goto LABEL_11;
  }
  if ( (*(_DWORD *)(v4 + 224) & 0x50) == 0 )
  {
    LODWORD(result) = -1073741637;
    goto LABEL_11;
  }
  LODWORD(result) = sub_140354420(v4, 2u, 0x2625AuLL, 1, &v9);
  if ( (int)result < 0 )
    goto LABEL_11;
  if ( (unsigned __int8)sub_1403BB040(v4) )
    return 0LL;
  if ( (*(_DWORD *)(v4 + 184) & 0x10) != 0 && (*(_DWORD *)(v4 + 224) &= ~0x400u, (*(_DWORD *)(v4 + 224) & 0xF00) != 0) )
  {
    sub_14050D048(v4, 209LL, 0LL, 0LL);
    result = sub_1403BAF00();
  }
  else
  {
    result = 3221225473LL;
  }
  *(_DWORD *)(v4 + 256) = 0;
  dword_140C4E844 = 25;
  *(_DWORD *)(v4 + 252) = 25;
  *(_QWORD *)(v4 + 264) = "minkernel\\hals\\lib\\timers\\common\\clockint.c";
  *(_DWORD *)(v4 + 272) = 280;
  if ( (int)result < 0 )
LABEL_11:
    KeBugCheckEx(0x5Cu, 0x110uLL, v4, dword_140C4E844, (int)result);
  return result;
}
