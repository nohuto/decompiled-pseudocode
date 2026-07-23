/*
 * XREFs of ObpGrantAccess @ 0x1407B64C4
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1406C0AEC (ObpInsertOrLocateNamedObject.c)
 *     ObDuplicateObject @ 0x1406FBB00 (ObDuplicateObject.c)
 * Callees:
 *     ObpAdjustCreatorAccessState @ 0x1406C2B38 (ObpAdjustCreatorAccessState.c)
 *     ObCheckObjectAccess @ 0x1407B6540 (ObCheckObjectAccess.c)
 */

__int64 __fastcall ObpGrantAccess(
        int a1,
        char *a2,
        struct _ACCESS_STATE *a3,
        KPROCESSOR_MODE a4,
        __int16 a5,
        ACCESS_MASK *a6)
{
  KPROCESSOR_MODE v7; // dl
  __int64 result; // rax
  NTSTATUS v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0;
  v7 = 1;
  if ( (a5 & 0x400) == 0 )
    v7 = a4;
  if ( (unsigned int)(a1 - 1) <= 1 )
  {
    if ( !(unsigned __int8)ObCheckObjectAccess(a2, a3, &v10) )
      return (unsigned int)v10;
    goto LABEL_5;
  }
  result = ObpAdjustCreatorAccessState(
             a3,
             v7,
             (_DWORD *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8)],
             (__int64)a2);
  if ( (int)result >= 0 )
  {
LABEL_5:
    *a6 = a3->PreviouslyGrantedAccess;
    return 0LL;
  }
  return result;
}
