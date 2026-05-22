/*
 * XREFs of ?AllocatePeer@BamoConnection@ISMBamos_AutoBamos@@MEAAJPEAPEAVBamoPeer@2@@Z @ 0x180015310
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall ISMBamos_AutoBamos::BamoConnection::AllocatePeer(
        ISMBamos_AutoBamos::BamoConnection *this,
        struct ISMBamos_AutoBamos::BamoPeer **a2)
{
  _QWORD *v4; // [rsp+38h] [rbp+10h]

  v4 = operator new(0x68uLL);
  *v4 = &ISMBamos_AutoBamos::BamoPeer::`vftable';
  v4[4] = 0LL;
  v4[5] = 0LL;
  v4[6] = 0LL;
  *((_WORD *)v4 + 28) = 0;
  v4[8] = 0LL;
  v4[9] = 0LL;
  *((_DWORD *)v4 + 4) = 1;
  v4[3] = v4;
  v4[10] = 0LL;
  v4[11] = 0LL;
  v4[12] = 0LL;
  v4[1] = &BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl::`vftable';
  *a2 = (struct ISMBamos_AutoBamos::BamoPeer *)v4;
  return 0LL;
}
