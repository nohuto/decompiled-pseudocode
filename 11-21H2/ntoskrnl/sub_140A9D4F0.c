/*
 * XREFs of sub_140A9D4F0 @ 0x140A9D4F0
 * Callers:
 *     sub_140A9DE70 @ 0x140A9DE70 (sub_140A9DE70.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1402DEF50 (RtlInsertElementGenericTableAvl.c)
 *     sub_140367A44 @ 0x140367A44 (sub_140367A44.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140601F88 @ 0x140601F88 (sub_140601F88.c)
 *     sub_140601FCC @ 0x140601FCC (sub_140601FCC.c)
 *     sub_140602068 @ 0x140602068 (sub_140602068.c)
 *     sub_14060207C @ 0x14060207C (sub_14060207C.c)
 *     sub_1406020E8 @ 0x1406020E8 (sub_1406020E8.c)
 */

_QWORD *__fastcall sub_140A9D4F0(void *Src, unsigned int a2, unsigned __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v9; // rdi
  _QWORD *inserted; // rax
  _QWORD *v12; // rbx
  int v13; // r8d
  __int128 v14; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD Buffer[56]; // [rsp+30h] [rbp-D0h] BYREF
  BOOLEAN NewElement; // [rsp+218h] [rbp+118h] BYREF

  NewElement = 0;
  v14 = 0LL;
  memset(Buffer, 0, 0x1B8uLL);
  Buffer[4] = 0LL;
  Buffer[0] = __PAIR64__(a2, a4);
  v9 = a5;
  Buffer[3] = a5;
  memmove(&Buffer[5], Src, 0x190uLL);
  if ( !dword_140D5757C )
    return 0LL;
  sub_140602068((__int64)&v14);
  sub_14060207C((__int64)&v14);
  sub_140601F88((__int64)&stru_140D58BC0, (__int64)&v14);
  inserted = RtlInsertElementGenericTableAvl(&stru_140D58BC0, Buffer, 0x1B8u, &NewElement);
  v12 = inserted;
  if ( inserted )
  {
    if ( NewElement )
    {
      if ( !(unsigned int)sub_140367A44(a3) )
        v13 |= 0x10u;
      *((_DWORD *)v12 + 3) = 1;
      ++dword_140C1A910;
      *((_DWORD *)v12 + 2) = v13 | 1;
    }
    else
    {
      inserted[3] += v9;
      ++*((_DWORD *)inserted + 3);
    }
  }
  else
  {
    ++dword_140D576AC;
  }
  sub_1406020E8((__int64)&stru_140D58BC0, (__int64)&v14);
  sub_140601FCC((__int64)&v14);
  return v12;
}
