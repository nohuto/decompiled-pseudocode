/*
 * XREFs of HamCreateActivityForProcess @ 0x180002590
 * Callers:
 *     sub_18001CFF4 @ 0x18001CFF4 (sub_18001CFF4.c)
 * Callees:
 *     sub_1800026E8 @ 0x1800026E8 (sub_1800026E8.c)
 *     sub_180006F5C @ 0x180006F5C (sub_180006F5C.c)
 *     sub_180007DE0 @ 0x180007DE0 (sub_180007DE0.c)
 *     unknown_libname_2 @ 0x180015130 (unknown_libname_2.c)
 */

CLIENT_CALL_RETURN __fastcall HamCreateActivityForProcess(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  CLIENT_CALL_RETURN result; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rdi
  unsigned int Pointer; // [rsp+40h] [rbp-28h]
  _QWORD v12[3]; // [rsp+48h] [rbp-20h] BYREF
  PVOID P; // [rsp+70h] [rbp+8h] BYREF

  v12[0] = -1LL;
  P = 0LL;
  result.Simple = sub_1800026E8(a2, a1, &P);
  Pointer = (unsigned int)result.Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    if ( (unsigned int)unknown_libname_2(a1) )
    {
      result.Simple = HampInProcCreateActivityForProcess(a1[1], a3, a4, v12);
    }
    else
    {
      result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800207A0, 4u, 0LL, *a1, a3, a4, v12).Pointer;
      v12[1] = result.Pointer;
    }
    Pointer = (unsigned int)result.Pointer;
    if ( SLODWORD(result.Simple) >= 0 )
    {
      v9 = P;
      *((_QWORD *)P + 6) = v12[0];
      v10 = v9[5];
      sub_180006F5C(v10);
      sub_180007DE0(v9);
      *(_DWORD *)(v10 + 16) = 0;
      RtlReleaseSRWLockExclusive(v10 + 8);
      P = 0LL;
      *a5 = v12[0];
      result.Simple = 0LL;
      Pointer = 0;
    }
  }
  if ( P )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    return (CLIENT_CALL_RETURN)Pointer;
  }
  return result;
}
