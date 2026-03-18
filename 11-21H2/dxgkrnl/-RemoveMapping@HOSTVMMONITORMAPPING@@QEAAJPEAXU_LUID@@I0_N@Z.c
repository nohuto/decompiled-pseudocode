/*
 * XREFs of ?RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJPEAXU_LUID@@I0_N@Z @ 0x1C0059464
 * Callers:
 *     _lambda_369d4bf1093f23b208c35a56a1ae801e_::operator() @ 0x1C0157008 (_lambda_369d4bf1093f23b208c35a56a1ae801e_--operator().c)
 *     _lambda_908f0e8ad16bb8359ff8641d3c1ab648_::operator() @ 0x1C01572B4 (_lambda_908f0e8ad16bb8359ff8641d3c1ab648_--operator().c)
 * Callees:
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_0b554593ef403a86ad1e63867a4eabfc___ @ 0x1C0058650 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_0b554593ef403a86ad1e63867a4eabfc___.c)
 */

__int64 __fastcall HOSTVMMONITORMAPPING::RemoveMapping(
        HOSTVMMONITORMAPPING *this,
        void *a2,
        struct _LUID a3,
        int a4,
        void *a5)
{
  _QWORD v6[4]; // [rsp+20h] [rbp-20h] BYREF
  void *v7; // [rsp+58h] [rbp+18h] BYREF
  struct _LUID v8; // [rsp+60h] [rbp+20h] BYREF
  int v9; // [rsp+68h] [rbp+28h] BYREF

  v9 = a4;
  v8 = a3;
  v7 = a2;
  v6[0] = &v7;
  v6[1] = &v8;
  v6[2] = &v9;
  v6[3] = &a5;
  return HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_0b554593ef403a86ad1e63867a4eabfc___(this, (__int64)v6);
}
