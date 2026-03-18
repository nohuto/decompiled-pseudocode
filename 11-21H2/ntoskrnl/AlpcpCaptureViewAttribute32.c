/*
 * XREFs of AlpcpCaptureViewAttribute32 @ 0x1406DA9E8
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1407AB790 (AlpcpCaptureAttributes.c)
 * Callees:
 *     AlpcpCaptureViewAttributeInternal @ 0x1407A4638 (AlpcpCaptureViewAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureViewAttribute32(__int64 a1, _DWORD *a2)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]
  __int64 v5; // [rsp+38h] [rbp-10h]

  v3 = 0LL;
  v4 = 0LL;
  LODWORD(v5) = 0;
  LODWORD(v3) = *a2;
  *((_QWORD *)&v3 + 1) = (unsigned int)a2[1];
  v4 = (unsigned int)a2[2];
  v5 = (unsigned int)a2[3];
  return AlpcpCaptureViewAttributeInternal(a1, &v3);
}
