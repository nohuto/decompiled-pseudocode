/*
 * XREFs of ??0SC_DRIVE@@QEAA@XZ @ 0x1C0006EF0
 * Callers:
 *     ??0PM_DRIVE@@QEAA@XZ @ 0x1C001EE78 (--0PM_DRIVE@@QEAA@XZ.c)
 * Callees:
 *     ??0SC_DISK@@QEAA@XZ @ 0x1C00097CC (--0SC_DISK@@QEAA@XZ.c)
 *     memset @ 0x1C000BA40 (memset.c)
 */

SC_DRIVE *__fastcall SC_DRIVE::SC_DRIVE(SC_DRIVE *this)
{
  SC_DRIVE *result; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  _OWORD v6[5]; // [rsp+20h] [rbp-58h] BYREF

  SC_DISK::SC_DISK(this);
  *(_QWORD *)this = &SC_DRIVE::`vftable';
  *((_WORD *)this + 196) = 0;
  *((_BYTE *)this + 395) = 0;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *(GUID *)((char *)this + 396) = GUID_NULL;
  *((_QWORD *)this + 54) = 0LL;
  *((_DWORD *)this + 110) = 0;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  memset(v6, 0, 0x48uLL);
  result = this;
  v3 = v6[1];
  *((_OWORD *)this + 30) = v6[0];
  *((_QWORD *)this + 69) = 0LL;
  v4 = v6[2];
  *((_OWORD *)this + 31) = v3;
  *((_BYTE *)this + 560) = 0;
  v5 = v6[3];
  *((_OWORD *)this + 32) = v4;
  *((_QWORD *)this + 72) = 0LL;
  *(_QWORD *)&v4 = *(_QWORD *)&v6[4];
  *((_OWORD *)this + 33) = v5;
  *((_QWORD *)this + 68) = v4;
  *((_DWORD *)this + 141) = 0;
  *((_DWORD *)this + 142) = 0;
  return result;
}
