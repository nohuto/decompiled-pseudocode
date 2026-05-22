/*
 * XREFs of ?HrFindInterface@CAnimationInstance@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E8CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAnimationInstance::HrFindInterface(
        DirectComposition::CAnimationInstance *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rax

  v3 = 0;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_15522914_d657_46ec_89bb_5fdcd176564b.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_15522914_d657_46ec_89bb_5fdcd176564b.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_15522914_d657_46ec_89bb_5fdcd176564b.Data4;
  if ( v4 )
    return (unsigned int)-2147467262;
  else
    *a3 = this;
  return v3;
}
