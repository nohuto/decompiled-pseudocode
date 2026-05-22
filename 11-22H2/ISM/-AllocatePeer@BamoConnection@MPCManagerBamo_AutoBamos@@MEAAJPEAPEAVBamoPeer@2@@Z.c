/*
 * XREFs of ?AllocatePeer@BamoConnection@MPCManagerBamo_AutoBamos@@MEAAJPEAPEAVBamoPeer@2@@Z @ 0x1800C0D60
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall MPCManagerBamo_AutoBamos::BamoConnection::AllocatePeer(
        MPCManagerBamo_AutoBamos::BamoConnection *this,
        struct MPCManagerBamo_AutoBamos::BamoPeer **a2)
{
  _DWORD *v4; // [rsp+38h] [rbp+10h]

  v4 = operator new(0x68uLL);
  *(_QWORD *)v4 = &MPCManagerBamo_AutoBamos::BamoPeer::`vftable';
  v4[4] = 1;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 5) = 0LL;
  *((_QWORD *)v4 + 6) = 0LL;
  *((_WORD *)v4 + 28) = 0;
  *((_QWORD *)v4 + 8) = 0LL;
  *((_QWORD *)v4 + 9) = 0LL;
  *((_QWORD *)v4 + 3) = v4;
  *((_QWORD *)v4 + 10) = 0LL;
  *((_QWORD *)v4 + 11) = 0LL;
  *((_QWORD *)v4 + 12) = 0LL;
  *((_QWORD *)v4 + 1) = &BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl::`vftable';
  *a2 = (struct MPCManagerBamo_AutoBamos::BamoPeer *)v4;
  return 0LL;
}
