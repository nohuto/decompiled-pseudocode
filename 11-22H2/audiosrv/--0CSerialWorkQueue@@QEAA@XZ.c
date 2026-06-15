/*
 * XREFs of ??0CSerialWorkQueue@@QEAA@XZ @ 0x180058B34
 * Callers:
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x18005888C (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     ??0CAudioSrv@@QEAA@XZ @ 0x180058A78 (--0CAudioSrv@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

CSerialWorkQueue *__fastcall CSerialWorkQueue::CSerialWorkQueue(CSerialWorkQueue *this)
{
  CSerialWorkQueue *result; // rax

  *(_QWORD *)this = 0LL;
  *((_BYTE *)this + 80) = 0;
  _Mtx_init_in_situ((CSerialWorkQueue *)((char *)this + 88), 2);
  *((_QWORD *)this + 21) = 0LL;
  result = this;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 2) = 3;
  *((_DWORD *)this + 17) = 1;
  *((_DWORD *)this + 18) = 72;
  return result;
}
