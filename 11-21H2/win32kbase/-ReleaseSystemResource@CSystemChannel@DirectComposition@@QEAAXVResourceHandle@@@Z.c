/*
 * XREFs of ?ReleaseSystemResource@CSystemChannel@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C001400C
 * Callers:
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C0013F54 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C0014E40 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 * Callees:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z @ 0x1C001229C (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

unsigned int __fastcall DirectComposition::CSystemChannel::ReleaseSystemResource(
        DirectComposition::CApplicationChannel *a1,
        int a2)
{
  unsigned __int64 v3; // rcx
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  unsigned int result; // eax

  v3 = (unsigned int)(a2 - 1);
  if ( a2 && v3 < *((_QWORD *)a1 + 17) )
    v4 = *(struct DirectComposition::CResourceMarshaler **)(v3 * *((_QWORD *)a1 + 18) + *((_QWORD *)a1 + 14));
  else
    v4 = 0LL;
  result = DirectComposition::CApplicationChannel::ReleaseResource(a1, v4);
  if ( !result )
    return DirectComposition::CApplicationChannel::Commit(a1, 0LL, 0, 0LL);
  return result;
}
