/*
 * XREFs of ?ReadRawMouseThrottlingThresholds@CMouseSensor@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1C01E5480
 * Callers:
 *     ReadRawMouseThrottlingThresholds @ 0x1C01E89D0 (ReadRawMouseThrottlingThresholds.c)
 * Callees:
 *     _lambda_39f407e4fe10312c322b3b59a6fe001c_::operator() @ 0x1C00B7DBC (_lambda_39f407e4fe10312c322b3b59a6fe001c_--operator().c)
 */

void __fastcall CMouseSensor::ReadRawMouseThrottlingThresholds(CMouseSensor *this, struct _UNICODE_STRING *a2)
{
  struct _UNICODE_STRING **v3; // [rsp+30h] [rbp+8h] BYREF
  struct _UNICODE_STRING *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v3 = &v4;
  lambda_39f407e4fe10312c322b3b59a6fe001c_::operator()((__int64 **)&v3, (__int64)this + 1360);
  lambda_39f407e4fe10312c322b3b59a6fe001c_::operator()((__int64 **)&v3, (__int64)this + 1384);
  lambda_39f407e4fe10312c322b3b59a6fe001c_::operator()((__int64 **)&v3, (__int64)this + 1408);
  lambda_39f407e4fe10312c322b3b59a6fe001c_::operator()((__int64 **)&v3, (__int64)this + 1432);
  *((_QWORD *)this + 183) = gliQpcFreq.QuadPart * (unsigned __int64)*((unsigned int *)this + 354) / 0x3E8;
  *((_QWORD *)this + 184) = gliQpcFreq.QuadPart * (unsigned __int64)*((unsigned int *)this + 360) / 0x3E8;
}
